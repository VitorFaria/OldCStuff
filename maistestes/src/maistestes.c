#include <stdio.h>
#include <stdlib.h>

int main(){
	while(1){
	int freq[128],i,a,ant=0;
	char c, resp;
	for(i=0;i<128;i++){
		freq[i]=0;
	}
	while((scanf("%c", &c))==1){
		a=c;
		freq[a]++;
	}
	for(i=0;i<128;i++){
		if (freq[i]>ant){
			ant=freq[i];
			resp=i;
		}
	}
	printf("%c\n", resp);
	}
	return 0;
}
