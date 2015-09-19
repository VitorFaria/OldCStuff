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

void juros()
{
	int c,t;
	float j,res;
	printf("Escreva tres valores inteiros positivos c, j, t, cada um seguido de ENTER, que representam, respectivamente, o capital inicial, a taxa de juros anual e o numero de anos de deposito de uma conta que funciona a juros complexos anuais.\nEste programa retornara o saldo final da conta\n\n");
	while(1)
	{
		scanf("%d%f%d",&c,&j,&t);
		if((c<0)||(j<0)||(t<0))break;
		res=c*pow(1+j,t);
		printf ("\n%f\n\n",res);
	}
}

int main(void)
{
	juros();
    system("PAUSE");
	return 0;
}
