#include <stdio.h>
#include <stdlib.h>

int main()
{
	int E,L,i,j,k,aux,colX,colY,normal=1;
    scanf("%d%d",&E,&L);
    if((E<3)||(E>100))return 0;
    if((L<(E-1))||(L>E*(E-1)/2))return 0;
    int matrizEst[E][E];
    for(i=0;i<E;i++){for(j=0;j<=E;j++){matrizEst[i][j]=0;}}
    for(i=0;i<L;i++){
        scanf("%d%d",&colX,&colY);
        colX--;
        colY--;
        matrizEst[colX][colY]=1;
        matrizEst[colY][colX]=1;
        for (aux=0; aux<E; aux++){
                if(matrizEst[aux][colX]!=0){
                         matrizEst[aux][colY]=1;
                         matrizEst[colY][aux]=1;
                }
                if(matrizEst[aux][colY]!=0){
                         matrizEst[aux][colX]=1;
                         matrizEst[colX][aux]=1;
                }
        }
        for(k=0;k<E;k++){
        	for(j=0;j<E;j++){
    		    if(j!=k){
    			    if(matrizEst[k][j]==0){
    				    for(aux=0; aux<E; aux++){
    				  	    if(matrizEst[k][aux]!=0){
    						    if(matrizEst[aux][j]!=0){
    							    matrizEst[k][j]=1;
                                    matrizEst[j][k]=1;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    for(i=0;i<E;i++){
        for(j=0;j<E;j++){
            if(matrizEst[i][j]==0)normal--;
        }
    }
    if(normal==1)printf("NORMAL\n");
    else printf("FALHA\n");
    system("PAUSE");
    return 0;
}

