/*
Name:Dan Ochieng Awiti
Reg no:PA106/G/28773/25
Description:Program to convert Farenheit to Celsius
*/
#include<stdio.h>
float Farenheit(float F)
{
	float C;
	C=(F-32)*5/9;
	return C;
}
int main ()
{
	float C,F;
	printf("Enter temperature in Farenheit: ");
	scanf("%f",&F);
	
	C=Farenheit(F);
	
	printf("The converted temperature is:  %.2f",C);
	
	return 0;
}