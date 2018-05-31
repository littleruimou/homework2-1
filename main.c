#include <stdio.h>
#include <stdlib.h>
#define size 5


int main() {
	int a[size]={9,5,3,4,8},i;
	for (i=0;i<size;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	bubblesort(a);
	for (i=0;i<size;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
