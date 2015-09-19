#include <stdio.h>
#include <stdlib.h>

int main()
{
  int freq[128];
  int j=0;
  while(j<128)
       {
          freq[j]=0;j++;
       }
  char c; int nvl,a,i;
  while(1)
  {
          nvl=scanf("%c", &c);
          a=c;
          if ((c!='\n') && (c!='\t') && (c!=' '))freq[a]++;
          if(nvl==-1)break;
  }
  for(i=0;i<128;i++)
  {
	  if (freq[i]!=0)
	  {
		  printf("%c aparece %d vez", i, freq[i]);
	      if (freq[i]!=1)printf("ez");
	      printf("\n");
	  }
  }
  system("PAUSE");
  return 0;
}
