/*
Name:Dan Ochieng Awiti
Reg no:PA106/G/28773/25
Description:Program to calculate electric bill
*/
#include<stdio.h>
float units( float a)
{
	float bill;
	bill=(a<=100)*(a*10)+(a>100&&a<=200)*(100*10+(a-100)*15)+(a>200)*(100*10+100*15+(a-200)*20);
	
	return bill;
}
int main()
{
	float a,bill;

	printf("Enter units consumed:  ");
	scanf("%f",&a);
	
	bill=units(a);
	
	printf("The total electric bill consumed is:  %.2f\n",bill);
	
	return 0;
}