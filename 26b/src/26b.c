#include <stdio.h>
#include <stdlib.h>

float somaiter(int n)
{
	int i; float soma=0,sinal, j;
	for(i=1;i<=n;i++)
	{
		sinal=(i%2==0?-1:1);
		j=i;
		soma=soma+(1/j*sinal);
	}
	return soma;
}

float somarec(int n,float soma)
{
      if (n==0)return soma;
      else
      {
           float sinal=(n%2==0?-1:1);
           float m=n;
           soma+=1/m*sinal;
           return somarec(n-1,soma);
      }
}

int main()
{
	int parc, x=0;
	printf("Escreva o numero de parcelas para o somatorio no modelo:\n1/1-2/4+3/9-4/16+5/25-...\nseguido de ENTER.\n\n");
	while(1)
	{
	scanf("%d",&parc);
	if (parc<0)break;
	printf("O resultado atraves de iteracao e: %f\n",somaiter(parc));
	printf("O resultado atraves de recursao e: %f\n\n",somarec(parc,x));
	}
	system("PAUSE");
	return 0;
}
