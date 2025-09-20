/*
NAME:DAN AWITI
REG NO:PA/106/G/28773/25
DESCRIPTION:VOLUME AND SURFACE AREA OF A CYLINDER
*/
#include<stdio.h>
int main()
{ 
	float radius,height,volume,surface_area;
	float pi=3.142;
	
	printf("Enter the radius: ");
	scanf("%f",&radius);
	printf("\nEnter the height: ");
	scanf("%f",&height);
	
	volume=3.142*radius*radius*height;
	printf("\n volume is %f ",volume);
	
	surface_area=(2*3.142*radius*radius)+(2*3.142*radius*height);
	printf("\nThe surface area is %f",surface_area);
	return 0;
}