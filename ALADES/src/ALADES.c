#include <stdio.h>
#include <stdlib.h>

int tempo (int x, int y, int z, int w)
{
    int atual, desp, min;
    atual=(x*60)+y;
    desp=(z*60)+w;
    min=(desp-atual);
    if (min>0) return min;
    else return (min+1440);
}

int main()
{
  int a, b, c, d;
  printf ("Digite a hora atual, os minutos atuais, a hora e depois os minutos para os quais o despertador foi programado, e apos isso precione ENTER:\n");
  while (1)
  {
    scanf ("%d %d %d %d", &a, &b, &c, &d);
    if (a==0 && b==0 && c==0 && d==0) break;
    printf ("%d\n\n", tempo(a,b,c,d));
  }
  system("PAUSE");	
  return 0;
}
