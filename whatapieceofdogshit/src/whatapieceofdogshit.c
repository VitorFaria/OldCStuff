#include <stdio.h>
#include <stdlib.h>

void imprimeCaracs (char c, int numCaracs) {
   int i;
   for (i=1; i<=numCaracs; i++)
   printf("%c",c);
}

void imprimeFig (int n) {
   int i, numCaracsLin=1, numEsp = (n-1);
   char c = '*';
   for (i=1; i<=n; i++) {
	   imprimeCaracs(' ',numEsp);
   imprimeCaracs(c,numCaracsLin);
   printf("\n");
   numEsp -=1;
   numCaracsLin +=2;
   c = (c=='*'? '!' : '*');
}
}

int main(int argc, char *argv[])
{
   int n;
   scanf("%d", &n);
   imprimeFig(n);
   system("PAUSE");
   return 0;
}
