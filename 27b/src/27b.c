#include <stdio.h>
#include <stdlib.h>

 float sen (float x,int n)
 {
    float num=x, den=1, soma=0;
    int m=0,i;
    for(i=1; i<=n; i++)
    {
        soma= soma+ num/den;
        num =(-1)*num*x*x;
        m=m+2;
        den= den*m*(m+1);
    }
    return soma;
}

 float cos (float x, int n)
 {
    float num=1, den=1, soma=0;
    int m=-1,i;
    for(i=1; i<=n; i++)
    {
        soma= soma+ num/den;
        num =(-1)*num*x*x;
        m=m+2;
        den= den*m*(m+1);
    }
    return soma;
}


int main()
{
	float rad;int parc;
	printf("Esta funcao calcula um valor aproximado do seno e cosseno de um angulo dado em radianos, usando as seguintes formulas:\nsen(x)=x-x3/3!+x5/5!-...\ncos(x)=1-x2/2!+x4/4!-...\nDigite o angulo em radianose o numero de parcelas para os somatorios, cada um seguido de ENTER.\n\n");
	scanf("%f%d",&rad,&parc);
	printf("%f\n",sen(rad,parc));
	printf("%f\n",cos(rad,parc));
	system("PAUSE");
	return 0;
}
