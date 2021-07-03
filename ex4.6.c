#include<stdio.h>
int main(){
	int h;
	int w;
	printf("Nhap so gio lam viec:\n");
	scanf("%d",&h);
	if(h<40){
		w = h * 25000;
	}else{
		w = 40*25000 + (h-40)*40000;
	}
	
	printf("Tien luong la: %d",w);
	return 0;
}
