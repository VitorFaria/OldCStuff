#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n,i,j,k,a,b,c;
	scanf("%d",&n);
	int naosud[n];
	for (i=0;i<n;i++)naosud[i]=0;
	for(k=0;k<n;k++){
	int sudoku[9][9];
	int y=0,x=0,aux=0;
	for(i=0;i<9;i++){for(j=0;j<9;j++)scanf("%d",&sudoku[i][j]);}
	int sudoku2[9][9];
	for (a=0;a<9;a++){
	   for(i=0,b=0;i<3;i++)for(j=0;j<3;j++,b++)sudoku2[a][b]=sudoku[i+y][j+x];
	   x=x+3;
	   if(x==9){x=0;y=y+3;}
	}
	for(i=0;i<9;i++){
		for(j=0;j<9;j++){
			for(c=0;c<9;c++)if(sudoku[i][c]==sudoku[i][j])aux++;
			if(aux!=1)naosud[k]++;
			aux=0;
		}
	}
	for(i=0;i<9;i++){
		for(j=0;j<9;j++){
			for(c=0;c<9;c++)if(sudoku[c][i]==sudoku[i][j])aux++;
			if(aux!=1)naosud[k]++;
			aux=0;
		}
	}
	for(i=0;i<9;i++){
		for(j=0;j<9;j++){
			for(c=0;c<9;c++)if(sudoku2[i][c]==sudoku2[i][j])aux++;
			if(aux!=1)naosud[k]++;
			aux=0;
		}
	}
	}
	for(i=0;i<n;i++){
		if(naosud[i]==0)printf("Instancia %d\nSIM\n\n",(i+1));
		else printf("Instancia %d\nNAO\n\n",(i+1));
	}
	system("PAUSE");
	return 0;
}
