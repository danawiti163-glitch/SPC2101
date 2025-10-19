/*
Name:Dan Ochieng Awiti
Reg no:PA106/G/28773/25
Description:Program to fare
*/
#include<stdio.h>
float distance(float a)
{
	float fare;
	fare=a*50;
	return fare;
}
int main ()
{
	float fare,a;
	printf("Enter the distance travelled:  ");
	scanf("%f",&a);
	
	fare=distance(a);
	
	printf("The fare is:%.2f",fare);
	return 0;
}