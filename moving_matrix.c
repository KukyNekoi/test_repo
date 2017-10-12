#include <stdio.h>
#include <conio.h>

void printMatrix(char[64][5] matrix)
{
	clrscr();
	int i = 0, j = 0;
	for(i < 5 ; i++){
		for(j < 64; j++){
			if(char[j][i] == '1'){
				printf(64);
			}
			else{
				printf(' ');
			}
		}
	}
}


