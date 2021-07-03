#include<stdio.h>
void incomeplus(int *CS,int *Y){
	for(int i =3 ; i<=*Y ; i++){
		*CS = *CS + 1000;
	}
	
	
}

int main(){
	int CS ,Y;
	scanf("%d %d",&CS , &Y);
	incomeplus(&CS,&Y);
	printf("%d",CS);
	return 0;
}
