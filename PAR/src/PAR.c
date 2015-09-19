#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, x, y, r;
    int i=1;
    char jog1[11], jog2[11];
    while (1)
    {
          printf ("Digite o numero de partidas de par ou impar:\n");
          scanf ("%d", &n);
          if (n==0) break;
          else while (n<0 || n>1000)
          {
               printf("Numero invalido. Digite-o novamente:\n");
               scanf("%d", &n);
          }
          printf ("Digite o nome dos participantes:\n");
          scanf ("%s %s", &jog1, &jog2);
          printf ("Digite os dois valores correspondentes aos participantes:\n");
          while (i<=n)
          {
                scanf ("%d %d", &x, &y);
                while (x<0 || x>5 || y<0 || y>5)
                {
                      printf("Numero invalido. Digite-o novamente:\n");
                      scanf ("%d %d", &x, &y);
                }
                r=(x+y);
                i++;
                if (r%2==0) printf ("%s\n", jog1);
                else printf ("%s\n", jog2);
         }
  }
  system("PAUSE");	
  return 0;
}
