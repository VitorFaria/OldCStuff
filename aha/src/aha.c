#include <stdio.h>
#include <stdlib.h>

int main()
{
	char c;
	int nvl, alg=0,let=0,lin=0;
	while(1)
		{
		nvl=scanf("%c", &c);
		if ((c>='0')&&(c<='9'))alg++;
		if (((c>='a')&&(c<='z'))||((c>='A')&&(c<='Z')))let++;
		if(c=='\n')lin++;
		if (nvl==-1) break;
		}
	printf("\nEsse texto tem:\n%d algarismos.\n%d letras.\n%d linhas.", alg, let,lin);
	system ("PAUSE");
	return 0;
}
