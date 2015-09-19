#include <stdio.h>
#include <stdlib.h>

int somaD3(int n, int o, int p, int q, int r, int s)
{
      printf ("Digite um numero de tres algarismos e ENTER.\nEste programa somara os tres algarismos deste numero.\n");
      scanf ("%d", &n);
      o =n/100;
      p = n%100;
      q = p/10;
      r = p%10;
      s= r+q+o;
      printf ("%d\n", s);
      system ("PAUSE");
}

int main()
{
	  int a,b,c,d,e,f;
	  return somaD3(a,b,c,d,e,f);
	  system("PAUSE");
	  return 0;
}
