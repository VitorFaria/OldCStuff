#include <stdio.h>
#include <stdlib.h>

struct caixa
{
	int valor;
	struct caixa *anter;
};

typedef struct caixa caixinha;

caixinha* lervalores()
{
	caixinha* p, *ult=NULL;
	int leitura;
	while((scanf("%d", &leitura))==1)
	{
		p = malloc(sizeof(caixinha));
		p -> valor=leitura;
		p -> anter=ult;
		ult = p;
	}
	return ult;
}

void imprimir(caixinha* p)
{
	while(p!=NULL)
	{
		printf("%d ", p -> valor);
		p = p -> anter;
	}
}

int main()
{
	caixinha* ultdomain;
    while(1)
    {
    	ultdomain = lervalores();
    	imprimir(ultdomain);
    }
	return 0;
}
