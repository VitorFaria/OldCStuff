#include <stdio.h>
#include <stdlib.h>

int conceito(int nota)
{
  printf ("Digite sua nota de 0 a 100 e precione ENTER:\n");
  scanf ("%d", & nota);
  printf ("seu conceito e: ");
  if ((nota>=0)&& (nota<60))  {printf ("R\n");system("PAUSE");}
  if ((nota>=60) && (nota<75)) {printf ("C\n");system("PAUSE");}
  if ((nota>=75) && (nota<90)) {printf ("B\n");system("PAUSE");}
  if ((nota>=90) && (nota<101)) {printf ("A\n");system("PAUSE");}
  else return 0;
  return 0;
}

int main()
{
	int a;
	return conceito(a);

}
