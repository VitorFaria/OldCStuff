
#include <stdio.h>
#include <stdlib.h>

float pow(float a,float b)
{
	float c;
	for(c=1;b>0;b--)
	{
		c=a*c;
	}
	return c;
}

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

int main(void)
{
	int rad, parc,i,exp,sw=0;
	float res=-0.0f;
	scanf("%d%d",&rad,&parc);
	for(i=1,exp=1;i<=parc;i++,exp=exp+2)
	{
		sw++;
		if(sw%2!=0)res=res+(pow(rad,exp))/fat(exp);
		if(sw%2==0)res=res-(pow(rad,exp))/fat(exp);
	}
	printf("\n%f\n",res);
	system("PAUSE");
	return 0;
}
