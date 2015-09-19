#include <stdio.h>
#include <stdlib.h>
int fat(int x)
{
	int i,n;
	for(i=0,n=1;x>0;i++)
			{
				n=n*x;
				x=x-1;
			}
	return n;
}


void comb()
{
	int res,n,p;
	printf("Digite pares de numeros inteiros positivos n,p, cada numero seguido de ENTER.\nEste programa imprimira, para cada par lido, o numero de combinacoes existentes de n objetos p a p.\n\n");
	while(1)
	{
		scanf("%d%d",&n,&p);
		if((n<0)||(p<0))break;
		res=fat(n)/(fat(n-p)*fat(p));
		printf("%d\n\n",res);
	}
}

int main()
{
	comb();
	system ("PAUSE");
	return 0;
}
