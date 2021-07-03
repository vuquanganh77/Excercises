#include<stdio.h>

void countEven(int *arr, int size){
	int i;
	int count=0;
	for (i=0; i<size; i++, arr++){
		if(*arr % 2 == 0){
			count++;
		}
	}
	printf("%d",count);
	
}

int main(){
	int a[5];
	int i;
	for(i=0; i<5; i++){
		scanf("%d",&a[i]);
	}
	int *arr;
	arr = a;
	countEven(*arr,5);
	return 0;
}
