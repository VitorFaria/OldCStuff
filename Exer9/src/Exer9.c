#include <stdio.h>
#include <stdlib.h>

int dn(int a, int b)
{
	printf ("Digite dois algarismos um apos o outro, cada um seguido de ENTER.\n");
	scanf("%d %d", &a ,&b);
	if (10*a+b>10*b+a) return 10*a+b; else return 10*b+a;
}

int main()
{
	int x, y;
	printf ("O maior numero que pode ser formado por esses dois algarismos e: %d\n", dn(x,y));
	system ("PAUSE");
	return 0;
}
