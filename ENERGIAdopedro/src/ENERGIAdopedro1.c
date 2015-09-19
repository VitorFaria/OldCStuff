#include <stdio.h>
#include <stdlib.h>

int main()
{
  int cont, est, lin, k, fail=0, teste=1;
  int aux;
  while(1)
  {
   do{
      scanf("%d %d", &est, &lin);
      if((est==0)&&(lin==0))return 0;    // fim de arquivo//
      if((3>est)||(est>100)||(lin<(est-1))||(lin>(est*(est-1)/2)))printf("erro, reescreva os numeros de estacao e linhas de transmissao");
   }while((3>est)||(est>100)||(lin<(est-1))||(lin>(est*(est-1)/2))); // restrição para o numero e estacoes e linhas//
   int arrX[lin], arrY[lin];// declaracao de 2 arranjos sendo seus componentes correspondentes as estacoes que cada linha liga//
   for(cont=1;cont<=lin;cont++){
     scanf("%d %d", &arrX[cont], &arrY[cont]);}//leitura das estacoes que cada linha liga//
   for(k=1;k<=est;k++){
     for(cont=0;cont<lin;cont++){
       if((arrX[cont]==k)||(arrY[cont]==k))aux++;}//verifica se ha alguma estacao desligada das autras//
     if(aux==0)fail=1;}
   printf("teste %d\n", teste);
   if(fail)printf("falha\n\n");
   else printf("normal\n\n");
   teste++;
  }
  system("PAUSE");
  return 0;
}
