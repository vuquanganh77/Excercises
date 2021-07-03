#include<stdio.h>
int main(){
	float *a;
	printf("Nhap vao 3 so:\n");
	scanf("%f\n", a);
	scanf("%f\n", a+1);
	scanf("%f", a+2);
	
	*a = *a + 100;
	*(a+1) = *(a+1) + 100;
	*(a+2) = *(a+2) + 100;
	
	printf("Gia tri luc sau cua 3 so la: %p, %p, %p",a,a+1,a+2);
	
	return 0;
}
