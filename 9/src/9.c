	#include <stdio.h>
#include <stdlib.h>

int somaDigs (int n) {
    if (n<10) return n;
    else return (n%10 + somaDigs(n/10));
}

int grau9 (int n) {
   if (n<10) return (n==9 ? 1 : 0);
   else { int grau = grau9(somaDigs(n));
          return (grau == 0? 0 : 1 + grau);
        }
}

int main() {
  int v, grau9v;
  while (1) {
        scanf("%d", &v);
        if (v==0) break;
        grau9v = grau9(v);
        printf("%d %se' divisivel por 9", v, grau9v==0 ? "nao " : "");
        if (grau9v==0) printf("\n");
        else printf(" e seu grau-9 e' %d\n",grau9v);
  }
  system("PAUSE");
  return 0;
}
