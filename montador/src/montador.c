#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NUMBUH 1001
#define MEDNUMBUH 200
#define LILNUMBUH 50


int CODENUM (char* opcode)
{
    if ( strcmp( opcode, "LOAD" ) == 0 ) return 1;
    if ( strcmp( opcode, "STORE" ) == 0 ) return 2;
    if ( strcmp( opcode, "JMP" ) == 0 ) return 3;
    if ( strcmp( opcode, "JPG" ) == 0 ) return 4;
    if ( strcmp( opcode, "JPE" ) == 0 ) return 5;
    if ( strcmp( opcode, "JPL" ) == 0 ) return 6;
    if ( strcmp( opcode, "JPNE" ) == 0 ) return 7;
    if ( strcmp( opcode, "PUSH" ) == 0 ) return 8;
    if ( strcmp( opcode, "POP" ) == 0 ) return 9;
    if ( strcmp( opcode, "READ" ) == 0 ) return 10;
    if ( strcmp( opcode, "WRITE" ) == 0 ) return 11;
    if ( strcmp( opcode, "CALL" ) == 0 ) return 12;
    if ( strcmp( opcode, "RET" ) == 0 ) return 13;
    if ( strcmp( opcode, "ADD" ) == 0 ) return 14;
    if ( strcmp( opcode, "SUB" ) == 0 ) return 15;
    if ( strcmp( opcode, "XOR" ) == 0 ) return 16;
    if ( strcmp( opcode, "AND" ) == 0 ) return 17;
    if ( strcmp( opcode, "OR" ) == 0 ) return 18;
    if ( strcmp( opcode, "HALT" ) == 0 ) return 19;
    else return 0; //Por segurança.
}

int main(int argc, char *argv[])
{
    int i;

    int PC = 0; //Não é exatamente um PC, mas em uma parte do programa sua contagem vai representar a posição na memória correspondente no programa montado.

    int TAB = 0; //Contador da tabela

    int *TABPOS; //Posição na memória de um determinado símbolo.
    TABPOS = malloc (NUMBUH * sizeof (int));
    for (i=0; i<NUMBUH; i++)
    {
        TABPOS[i] = 0;
    }

    char **TABLABEL; //Os símbolos em si.
    TABLABEL = malloc (NUMBUH * sizeof (char*));
    for(i=0;i<NUMBUH;i++)
    {
        TABLABEL[i] = malloc (sizeof (char*));
    }

    int *PROGMAQ;//Vetor de inteiros que se tornará o programa montado.
    PROGMAQ = malloc (NUMBUH * sizeof (int));
    for (i=0; i<NUMBUH; i++)
    {
        PROGMAQ[i] = 0;
    }

    char stringaux[LILNUMBUH] = "coisa";//String auxiliar.
    char *token = "coisa";//Outra string auxiliar.

    FILE *file;
    file = fopen (argv[2], "r");

    while (!feof(file))//Passagem 1.
    {
        fgets (stringaux, MEDNUMBUH, file);
        token = strtok(stringaux, " \n");
        if(token[strlen(token)-1] == ':')
        {
            token[strlen(token)-1] = '\0';
            TABPOS[TAB] = PC;
            strcpy(TABLABEL[TAB], token);
            TAB++;
            token = strtok(NULL, " \n");
            if ( ( strcmp (token, "HALT") == 0) || ( strcmp (token, "RET") == 0) || ( strcmp (token, "WORD") == 0) )
            {
                PC++;
            }
            else PC = PC + 2;
        }
        else
        {
            if ( ( strcmp (token, "HALT") == 0) || ( strcmp (token, "RET") == 0) )
            {
                PC++;
            }
            else PC = PC + 2;
        }
    }

    fclose(file);

    file = fopen (argv[2], "r");
    PC = 0;

    while(!feof(file))//Passagem 2.
    {
        fgets (stringaux, MEDNUMBUH, file);
        token = strtok(stringaux, " \n");
        if(token[strlen(token)-1] == ':') token = strtok(NULL, " \n");
        if(strcmp(token, "WORD") == 0)
        {
            token = strtok(NULL, " \n");
            PROGMAQ[PC] = atoi(token);
            PC++;
        }
        else
            {
            if((strcmp(token, "HALT") == 0) || (strcmp(token, "RET") == 0))
            {
                PROGMAQ[PC] = CODENUM(token);
                PC++;
            }
            else
            {
                if(strcmp(token, "END") == 0) break;
                PROGMAQ[PC] = CODENUM(token);
                PC++;
                token = strtok(NULL, " \n");
                for(i=0;i<TAB;i++)
                {
                    if ((strcmp(TABLABEL[i], token )== 0))
                    {
                        PROGMAQ[PC] = TABPOS[i] - PC -1;
                    }
                }
                PC++;
            }
        }
    }
    fclose(file);

    FILE *saida;
    saida = fopen (argv[3], "w");

    for(i=0;i<PC;i++)//Aqui o programa montado é impresso na saída.
    {
        if ((PROGMAQ[i]<10) && (PROGMAQ[i]>=0)) fprintf(saida, "%d", 0);
        fprintf(saida, "%d\n", PROGMAQ[i]);
    }
    fclose(saida);

    if (strcmp(argv[1], "v") == 0)//Modo verbose.
    {
        printf("Simbolo\t\tPosicao na memoria\n");
        for (i=0;i<TAB;i++)
        {
            printf("%s\t\t%d\n", TABLABEL[i], TABPOS[i]);
        }
    }

    return 0;
}
