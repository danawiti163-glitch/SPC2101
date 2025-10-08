/*
Name:Dan Awiti
Reg no:PA106/G/28773/25
Description:Program to enter correct password
*/
#include<stdio.h>
int main()
{
	int password;
	do
	{
		printf("Enter your password; ");
		scanf("%d",&password);
		
		if(password!=1234)
		{
			printf("Incorrect password!Try again: \n");
		}
	}while(password!=1234);
	printf("Access granted \n");
	return 0;
	
	
	
}