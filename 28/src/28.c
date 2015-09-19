#include <stdio.h>
#include <stdlib.h>

void tabela()
{
	int i,n=10,j,o=10;
	for(i=1;i<=n;i++)
	{
		printf("%d\t",i);
		for(j=2;j<=o;j++)printf("%d\t",i*j);
		printf("\n");
	}
}

int main()
{
	tabela();
	system("PAUSE");
	return 0;
}
