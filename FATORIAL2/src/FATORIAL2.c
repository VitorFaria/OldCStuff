#include <stdio.h>
#include <stdlib.h>

//Por algum motivo que ainda não consegui descobrir, esse programa só funciona com certeza de 0 a 25.

int main()
{
    int a, n, inst=1, fat=1;
    printf ("Digite os numeros que voce deseja calcular o ultimo algarismo de seu fatorial:\n");
    while (1)
    {
        scanf("%d", &n);
        if (n<0) break;
        a=n;
        fat=a*(a-1);
        a-=2;
        while (a>1)
        {
              while (fat%10==0) fat=fat/10;
              while (fat>10) fat=fat%10;
              fat=fat*a;
              while (fat%10==0) fat=fat/10;
              while (fat>10) fat=fat%10;
              a--;
        }
        if((n==0)||(n==1))fat=1;
        printf ("Instancia: %d\n", inst);
        printf ("%d\n\n", fat);
        inst++;
        fat=1;
    }
    system("PAUSE");	
    return 0;
}
