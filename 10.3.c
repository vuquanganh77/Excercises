#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	char str1[100];
	gets(str);
	for(int i=0 ; i <= strlen(str)-1 ; i++)
		str1[i] = str[strlen(str)-1-i];
	
	printf("%s",str1);
	

	return 0;
}
