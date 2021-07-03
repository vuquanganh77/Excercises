#include<stdio.h>

int main(){
	int a;
	printf("nhap tuoi:\n");
	scanf("%d",&a);
	if(a<18){
		printf("Child\n");
	}
	else if(a>18 && a<65){
		printf("Adult\n");
	}
	else{
		printf("Senior Citizen");
	}
	return 0;
}
