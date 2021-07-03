#include<stdio.h>
int main(){
	int x , y ,z;
	int *p , *q , *r;
	
	p = &x;
	q = &y;
	r = &z;
	scanf("%d %d %d",x,y,z);
	printf("x = %d , y = %d , z = %d \np = %p , q = %p , r = %p \n*p = %d , *q = %d , *r = %d", x,y,z,p,q,r,*p,*q,*r); 
	return 0;
}
