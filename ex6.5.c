#include<stdio.h>
#include<time.h>
int main(){
	int a, b;
	srand((int)time(0));
	srand(time(0));	
	a = rand();
	printf("%d\n",a);
	printf("doan so a:\n");
	scanf("%d",&b);
	if(b>a)
		printf("too high!");
	if(b<a)
		printf("too low!");
	if(b==a)
		printf("correct!");
}
