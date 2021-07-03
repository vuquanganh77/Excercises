#include<stdio.h>
int main(){
	double x ,y;
	scanf("%f",&x);
	scanf("%f",&y);
	if(x>y)
		printf("x is larger than y");
	if(x<y)
		printf("x is less than y");
	if(x==y)
		printf("x is equal to y");
	return 0;
}
