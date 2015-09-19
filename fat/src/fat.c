#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a,i,n;
	scanf("%d",&a);
	for(i=0,n=1;a>0;i++)
		{
			n=n*a;
			a=a-1;
		}
	printf("\n%d\n",n);
	system("PAUSE");
	return 0;
}
