#include <stdio.h>

int main() {
	int i,j;
	int space=4,rows=5;
	/* run loop (parent loop) till number of rows*/
	for (i = 0; i < rows; i++){
		//for initially space before printing
		for ( j=0;j<space; j++){
			printf("");
		}
		for (j = 0; j<=i; j++){
			printf("*");
		}
		printf("\n");
		space--; // decrement one space after one row
		
	}
}