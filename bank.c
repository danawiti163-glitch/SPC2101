/*
Name:Dan Awiti
Reg No:PA106/G/28773/25
Description:Program to implement bank reruirements
*/
#include<stdio.h>
	int main()
	{
		int age;
		double income;
		
		printf("\n Enter your age: ");
		scanf("%d",&age);
		
		printf("\nEnter your income: ");
		scanf("%lf",&income);
		if(age>=21&&income>=21000){
		printf("\nConratulations you qualify for a loan");}else{
		printf("\nUnfortunately,we are unable to offer you a loan at this time");
		}
		return 0;
	}