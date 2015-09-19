#include <stdio.h>
#include <stdlib.h>

void nundiv()
{
	int i,n,div;
	printf("Digite pares de numeros inteiros positivos, cada numero seguido de ENTER.\nEste programa retornara o numero de vezes que o primeiro pode ser dividido exatamente pelo segundo.\n\n");
	while(1)
	{
		scanf("%d%d",&n,&div);
		if((n<0)||(div<0))break;
		for(i=0;n>=div,n%div==0;i++)
		{
			n=n/div;
		}
		printf("%d\n\n",i);
	}
}

int main()
{
	nundiv();
	system ("PAUSE");
	return 0;
}
