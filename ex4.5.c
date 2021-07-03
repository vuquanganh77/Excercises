#include<stdio.h>
#include<math.h>
int main(){
	const float pi = 3.14;
	/*float r1;
	printf("enter circle's radius\n");
	scanf("%f",&r1);
	printf("the area of the circle is : %f\n",r1*r1*pi);
	printf("the circumference of the circle is : %f", r1*2*pi);*/
	
	float r2;
	float area;
	float volume;
	printf("enter sphere's radius\n");
	scanf("%f",&r2);
	area = 4*pi*r2*r2;
	volume = (pi*r2*r2*r2*4)/3;
	printf("the area of the circle is : %f\n",area);
	printf("the volume of the circle is : %f",volume);
	return 0;
}
