#include <stdio.h>
#include <stdlib.h>

void coisa(int n)
{
	int i;
	int x,d=0;
	printf("Digite o numero de digitos da sequencia de fibonacci que voce quer ver,\ne apos isso ENTER: ");
	scanf("%d", &n);
	n=n-2;
	if(n==-1)printf("0\n");
	if(n<=-2)printf("\n");
	if(n>=0)
	{
	printf("0\n1\n");
	for(i=1,x=1;i<=n;i++)
	 {
		if(d>x)
		{
		x=x+d;
		printf("%d\n",x);
		}
		else
		{
			d=d+x;
			printf("%d\n",d);
		}
	 }
	}
}

int main()
{
	int n;
	coisa(n);
	system ("PAUSE");
	return 0;
}
