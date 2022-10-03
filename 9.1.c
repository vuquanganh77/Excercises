#include<stdio.h>
// abcde
bool isleapyear(int year){
	if (year % 4 == 0 && year %100 != 0 ){
		return true;}
	if (year % 400 == 0){
		return true;
	}
	else 
		return false;
}
int main(){
	
	int year;
	printf("Nhap nam:\n");
	scanf("%d",year);
	
	if (isleapyear(year) == true){
		printf("Day la nam nhuan");
	}else{
		printf("Day khong phai la nam nhuan");
	}
	return 0;
	
}
