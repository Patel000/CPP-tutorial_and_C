#include <stdio.h>

int swap(int *a , int *b){
	temp = *a
	*a = *b
	*b = temp
	}

int main() {
	int x,y;
	printf("Enter x:");
	scanf("%d\n",&x);
	printf("Enter y:");
	scanf("%d\n",&y);
	printf("after (x,y) = (%d,%d)",x,y);
	swap(x,y);
	printf("bfor (x,y) swap = (%d,%d):",x,y);
	return 0;
	}
