#include <stdio.h>
#include <stdlib.h>



int main()
{
    int a, soma, nvl;
    scanf ("%d", &a);
    soma=a;
    while(1){
             nvl = scanf ("%d", &a);
             if(nvl==-1) break;
             soma = a + soma;
           }
           printf ("%d", soma);
           system("PAUSE");
           return 0;
}
