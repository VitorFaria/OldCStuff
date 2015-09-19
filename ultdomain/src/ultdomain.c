#include<stdio.h>
#include<stdlib.h>

int main(){
	while(1){
	char c;
	int a,resp=0;
	while((scanf("%c",&c))==1){
		if((c>='a')&&(c<='z'))a=(c-'a')+1;
		else{
			if((c>='A')&&(c<='Z'))a=(c-'A')+27;
			else{
				if((c>='0')&&(c<='9'))a=(c-'0')+53;
				else a=0;
			}
		}
		resp=resp+a;
	}
	printf("%d\n", resp);
	}
	return 0;
}
