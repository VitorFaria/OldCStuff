#include <stdio.h>
#include <stdlib.h>

int inverteD3(int n, int o, int p, int q, int r)
{
      printf ("Digite um numero de tres algarismos e ENTER.\nEste programa colocara o primeiro algarismo na posicao do terceiro e vice versa.\n");
      scanf ("%d", &n);
      o =n/100;
      p = n%100;
      q = p/10;
      r = p%10;
      printf ("%d", r);
      printf ("%d", q);
      printf ("%d\n", o);
      system ("PAUSE");
}

int main()
{
	  int a,b,c,d,e;
	  return inverteD3(a,b,c,d,e);
	  return 0;
}
