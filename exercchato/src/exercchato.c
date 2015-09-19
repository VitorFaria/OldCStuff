#include <stdio.h>
#include <stdlib.h>

struct caixa
{
	int val;
	struct caixa *prev;
};
typedef struct caixa Caixa;

int main()
{
	int n,i,leit,teste=1,aux;
	scanf("%d",&n);
	Caixa* arrcaixa[n];
	for(i=0;i<n;i++){
		arrcaixa[i]->val=0;
	}
	while(teste==1){
        teste=(scanf("%d",&leit));
        aux=leit%n;
		arrcaixa[aux]->prev=malloc(sizeof(Caixa));
		arrcaixa[aux]->prev=arrcaixa[leit%n];
		arrcaixa[aux]->val=leit;
	}
	for(i=0;i<n;i++){
		printf("Valores com resto %d:",i);
		while((arrcaixa[i]->val)!=0){
			printf("%d ",arrcaixa[i]->val);
			arrcaixa[i]=arrcaixa[i]->prev;
		}
		printf("\n");
	}
	system("PAUSE");
	return 0;
}
