#include <stdio.h>
#include <stdlib.h>

float num (int m)
{
	int a;
    if (m%2!=0)a=m;
    else a=-m;
    return a;
}

int den (int m)
{
	int z,w,b=1;
    for (z=1, w=1; z<m; z++)
    {
    	w=w+2;
    	b=b+w;
    }
    return b;
}

int main()
{
  int n, somados; float resultado=0.0f;
  while(1)
  {
  printf ("Digite o numero de parcelas seguido de ENTER: ");
  scanf ("%d", &n);
  if(n<0)break;
  for (somados=1;somados<=n;somados++)
      {
      resultado=resultado+(num(somados)/den(somados));
      }
  printf ("A soma das parcelas e: %f\n\n", resultado);
  resultado=0.0f;
  }
  system("PAUSE");
  return 0;
}
