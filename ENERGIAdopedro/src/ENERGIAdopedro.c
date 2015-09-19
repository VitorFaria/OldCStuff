    /* Priscila Louise Ribeiro Aguirre
       Gradua��o Engenhari El�trica
       Belo Horizonte Jun 2010
    PS: dica dada por Let�ca Cabreira 
    */
    
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i, h, j, lin, col, aux, E, L, X, Y;
  int** estacao;
  scanf ("%d %d", &E, &L); //entra com o n�mero de Esta��es e de Linhas que as conecta
  estacao = malloc(E*sizeof(int*));           //faz uma matriz quadrada
  for (i=0; i<E; i++){                        //cujos lados s�o o n�mero de esta��es,
      estacao[i] = malloc(E*sizeof(int));     //onde cada uma delas ser� relacionada (quais est�o ligadasou n�o)   
  }
  for (i=0; i<E; i++){                         //faz com que todos os elementos 
      for (j=0; j<=E; j++){                    //da matriz seja igual a zero
          estacao[i][j]=0;
      }
  }  
  for (i=0; i<L; i++){                         
      scanf ("%d %d", &X, &Y);                 
      X--;
      Y--;
      estacao[X][Y]=1;            //marca na matriz as estacaoes diretamentes ligadas           
      estacao[Y][X]=1;            //a matriz � sim�trica, logo, marca-se os "dois lados"          
      for (aux=0; aux<E; aux++){
              if ((estacao[aux][X]!=0)){                  //marca na matriz, estacaoes que estao 
                                  estacao[aux][Y]=1;      //interligadas indiretamente
                                  estacao[Y][aux]=1;
                                  }
              if ((estacao[aux][Y]!=0)){
                                  estacao[aux][X]=1;
                                  estacao[X][aux]=1;
                                  }
      } 
      for (h=0; h<E; h++){                         //nessa recurs�o, procura-se concertar as falhas
              for (j=0; j<E; j++){                 //existentes na anterior. Em outras palavras,
                                                   //na recurcao anteior, algumas estacao que deveriam
                  if (j!=h){                       //estar ligadas        
                  
                     if (estacao[h][j]==0){        //para isso, ele procura um "zero"
                     
                        for (aux=0; aux<E; aux++){ //e verifica se , naquele zero, a matriz deveria 
                                                   //estar ligada a outras estacoes.
                             if (estacao[h][aux]!=0){
                             if (estacao[aux][j]!=0){
                                  estacao[h][j]=1;   //quando isso ocorre, muda esse zero por um
                                  estacao[j][h]=1;}
                             }
                        }
                    }
                 }
              }
       }
  }    
                
  aux = 0;
  for (lin=0; lin<E; lin++){
      printf ("\n");
      for (col=0; col<E; col++)
          printf ("%d  ", estacao[lin][col]);
  }                               
  for (lin=0; lin<E; lin++){
      for (col=0; col<E; col++){               
          if (estacao[lin][col]==0) aux++;
      } 
  }  
  
  if (aux!=0) printf ("FALHA \n");
  if (aux==0){ printf ("NORMAL \n"); }
  
  system("PAUSE");	                           
  return 0;
}

