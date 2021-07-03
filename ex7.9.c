#include<stdio.h>
int main(){
	int i, a, b=1;
	printf("nhap a:\n");
	scanf("%d",&a);
	for(i=1; i<=a; i++){
		b*=i;
	}
	printf("%d! = %d",a,b);
}
