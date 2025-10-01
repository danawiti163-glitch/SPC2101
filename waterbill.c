/*
NAME:AWITI DAN OCHIENG
REG NO:PA106/G/28773/25
DESCRIPTION :PROGRAM TO DISPLAY WATER BILL
*/
#include<stdio.h>
int main()
{
int water_units;
float Total_water_bill;
float water_bill;

printf("Enter number of water units consumed:  ");
scanf("%d",&water_units);
if(water_units<=30)
{ water_bill=20;}
	else if(water_units >=31&& water_units<=60)
	{water_bill=25;}
		else if(water_units>60)
		{water_bill=30;}
			Total_water_bill=water_units*water_bill;
	printf("Total water bill is %.2f:   KES",Total_water_bill);
	return 0;
}
			
		
	
	

