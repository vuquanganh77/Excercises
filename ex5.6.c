#include<stdio.h>
int main(){
	int lop[7];
	int min,max;

	
	for(int i=0 ; i<=6 ; i++)
		scanf("%d",&lop[i]);
		
	
	max=lop[0];
	for(int j=1 ; j<=6 ; j++)
		if(min >= lop[j])
			min = lop[j];
		
	printf("%d",min);
	return 0;
}
