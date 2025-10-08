/*
Name:Dan Awiti
Reg no:PA106/G/28773/25
Description:Program to display bank ATM withdrawals
*/
#include<stdio.h>
int main()
{
	int balance=35000;
	int amount;
	
	
	while(balance>0)
	{
		
		printf("Enter the withdrawal amount:  ");
     	scanf("%d",&amount);
     	
     	if(amount>balance){
     		printf("You have insufficient funds\n",balance);
		 }
     	else
		 {
     		balance-=amount;
		
		printf("Your bank balance is:%d \n",balance);
		
		 }
	}
	printf("You have insufficient funds");
	return 0;
}