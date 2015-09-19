#include <stdio.h>
#include <stdlib.h>

int main()
{
  int P,N,C,i,j,k;
  scanf("%d",&P);
  scanf("%d",&N);
  scanf("%d",&C);
  int arr[P][N];
  int pal[P];
  for(i=0;i<P;i++)pal[i]=0;
  for(i=0;i<P;i++){for(j=0;j<N;j++)arr[i][j]=0;}
  for(i=0;i<N;i++){for(j=0;j<P;j++)scanf("%d",&arr[j][i]);}
  for(i=0;i<P;i++){if(arr[i][0]==1)pal[i]++;for(j=0;j<N;j++){if((arr[i][j]==0)&&(arr[i][j+1]==1))pal[i]++;}}
  int **tampalmenosum;//Matriz compostapelo tamanho de cada palito menos um.
  tampalmenosum=malloc(P*sizeof(int*));
  for(i=0;i<P;i++)tampalmenosum[i]=malloc(pal[i]*sizeof(int));
  for(i=0;i<P;i++){for(j=0;j<pal[i];j++)tampalmenosum[i][j]=0;}
  for(i=0;i<P;i++){k=0;for(j=0;j<N;j++){if((arr[i][j]==1)&&(arr[i][j+1]==1))tampalmenosum[i][k]++;if((arr[i][j]==1)&&(arr[i][j+1]==0))k++;}}
  int resposta=0;
  for(i=0;i<P;i++){for(j=0;j<pal[i];j++)if((tampalmenosum[i][j]+1)>=C)resposta++;}//Aqui o teste compensa a falta de uma unidade em cada tamanho de palito.
  printf("%d\n", resposta);
  system("PAUSE");
  return 0;
}
