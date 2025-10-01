/*
NAME:AWITI DAN OCHIENG
REG NO :PA106/G/28773/25
DESCRIPTION:PROGRAM FOR EXAM ELIGIBILITY
*/
#include <stdio.h>
int main ()
{
	int attendance;
	int average_marks;
	
	printf("Enter your attendance :  ");
	scanf("%d",&attendance);
	
	printf("Enter your average_marks:  ");
	scanf("%d",&average_marks);
	
	if(attendance>=75 && average_marks>=40)
	{ printf("Eligible");}
		else {printf("Not eligible");}
		return 0;
}
		
