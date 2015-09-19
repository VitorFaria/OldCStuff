#include <stdio.h>
#include <stdlib.h>

int main()
{
  printf ("Jason apareceu! O que voce faz?\nDigite 1 para correr.\nDigite 2 para ficar parado que nem um besta.\nDigite 3 para puxar seu sabre de luz.\n");
  int a;
  scanf ("%d", &a);
  if (a==2)printf ("Voce morreu!\n");
  if (a==1)
	  {
	  printf ("Voce encontrou uma vassoura!\n");
      printf("Digite 1 para pegar a vassoura e continuar correndo.\nDigite 2 para enfrentar Jason com sua nova formidavel arma.\n");
      int c;
      scanf ("%d", &c);
      if (c==1) printf ("Voce sobreviveu! Parabens!\n");
      if (c==2) printf ("Morreu otario!\n");
	  }
  if (a==3)
            {
            printf ("Fuck yeah!\n...\nOpa! Voce esqueceu ele em casa!\n");
            printf("Digite 1 para correr.\nDigite 2 para ficar parado que nem um besta.\n");
            int b;
            scanf ("%d", &b);
            if (b==1)
      	            {
      	              printf ("Voce encontrou uma vassoura!\n");
                      printf("Digite 1 para pegar a vassoura e continuar correndo.\nDigite 2 para enfrentar Jason com sua nova formidavel arma.\n");
                      int d;
                      scanf ("%d", &d);
                      if (d==1) printf ("Voce sobreviveu! Parabens!\n");
                      if (d==2) printf ("Morreu otario!\n");
      	            }
            if (b==2) printf ("Morreu otario!\n");
            }
  system("PAUSE");
  return 0;
}
