#include<stdio.h>
int main(){
	int a;
	int b;
	int c;
	
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	
	int *d = &a;
	int *e = &b;
	int *f = &c;
	printf("Dia chi cua a la: %p\n",d);
	printf("Dia chi cua b la: %p\n",e);
	printf("Dia chi cua c la: %p\n",f);
	
	return 0;
}
