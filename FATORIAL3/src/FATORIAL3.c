#include <stdio.h>
#include <stdlib.h>
int numdireitafatorial_n(int n){
    int i,aux1=1,aux2,result;
    for(i=1;i<=n;i++){
                               aux1*=i;
                               }
            for(aux2=10;;){
                    if(aux1%aux2==0){
                                     aux1=(aux1/aux2);
                                     }
                    else{
                         result = aux1%aux2;
                         break;
                                    }
                                    }
            return result;
    }

int main()
{
 int k, n,scan;
 for(k=1;;k++){
        
        if(scanf("%d",&n)==0) break;
        else{
             printf("Instancia %d\n%d\n",k,numdireitafatorial_n(n));
             }
             }
             
            
             


  
  system("PAUSE");	
  return 0;
}
