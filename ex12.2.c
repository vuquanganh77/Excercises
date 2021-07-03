#include<stdio.h>

int main(){
	int a[7]= {13, -355, 235, 47, 67, 943, 1222};
	int *b; 
	
	
	for(int i = 0 ; i<5 ; i++){
		printf("Dia chi cua phan tu a[%d] theo he co so 16 la : %p\n",i, b= &a[i]);
		
	}
	
	return 0;
}
