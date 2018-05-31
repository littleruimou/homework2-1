#include <stdio.h>
#include <stdlib.h>
#define size 5
bubblesort(int *array){
	int pass,i,t;
	for (pass=0;pass<size-1;pass++){
		for(i=0;i<size-1;i++){
			if(array[i]>array[i+1]){
				t=array[i];
				array[i]=array[i+1];
				array[i+1]=t;
			}
		}
	}
}
