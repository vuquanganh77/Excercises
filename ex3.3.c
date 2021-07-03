#include<stdio.h>
int main(){
	char name[20];
	printf("What is your name ?\n");
	fgets(name,20,stdin);
	printf("Hello %s",name);
	
	return 0;
}
