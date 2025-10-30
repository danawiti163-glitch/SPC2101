/*
Name:DAN OCHIENG AWITI
Reg no:PA106/G/28773/25
Description:Program to display weekly and daily revenue*/

#include<stdio.h>
int main()
{
	
	int revenue [50]={0};
	int i;
	float weekly_revenue=0;
	float average_revenue=0;
	for(i=0;i<3;i++)
	{
		printf("Enter you daily revenue: ");
		scanf("%d",&revenue[i]);
		weekly_revenue+=revenue[i];
		average_revenue=weekly_revenue/7;
	}printf("\n");

   
   	printf("\nYour total weekly revenue is: %.2f",weekly_revenue);
   	printf("\nYour daily average revenue is: %.2f",average_revenue);
	
	return 0;
}
		
	