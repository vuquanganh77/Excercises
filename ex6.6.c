#include<stdio.h>

int main(){
	int a, b, c;
	printf("nhap a:\n");
	scanf("%d",&a);
	printf("nhap b:\n");
	scanf("%d",&b);
	printf("nhap c:\n");
	scanf("%d",&c);
	
	if(a<b && a<c)
		printf("%d is smallest",a);
	if(b<a && b<c)
		printf("%d is smallest",b);
	if(c<a && c<b)
		printf("%d is smallest",c);
	if(a==b && a==c)
		printf("no smallest");
}
