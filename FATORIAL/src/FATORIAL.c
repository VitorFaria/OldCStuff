#include <stdio.h>
#include <stdlib.h>

int tamanho (char* s) { 
  int i=0;
  while (s[i] != '\0') i++; 
  return i;
}   
 

char* concat(char* s1, char* s2) {
  char *s;
  int tam1 = tamanho(s1), tam2 = tamanho(s2), tam = tam1+tam2+1;

  s = malloc(tam*sizeof(char));
   int i,j;
  for (i=0; i<tam1; i++) s[i] = s1[i];
  for (j=0; j<tam2; j++,i++) s[i] = s2[j];
  s[i] = '\0';
  return s;
}
   
int main() {
  char *s1, *s2;
  int t1, t2;

  scanf("%d",&t1); 
  s1 = malloc(t1*sizeof(char));
  scanf("%s",s1);

  scanf("%d",&t2); 
  s2 = malloc(t2*sizeof(char));
  scanf("%s",s2);

  printf("concat(%s,%s) = %s\n",s1, s2, concat(s1,s2));
  system("PAUSE");
  return 0;
} 

