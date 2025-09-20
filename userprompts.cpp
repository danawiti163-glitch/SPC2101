
/*
Name:Dan Awiti
Reg :PA106/G/28773/25
Description :Display of height ID number and bank balance
*/
#include<stdio.h>
int main(){
	int height;
	int long long ID_Number;
	int bank_balance;
	int favourite_colour;
	
	printf("Enter your height:  ");
	scanf("%d",&height);
	printf("Your height is %d\n ",height);

	printf("Enter your ID Number: ");
	scanf("%lld",& ID_Number);
	printf("Your ID Number is %lld\n " ,ID_Number);
	
	printf("Enter your bank balance:  ");
	scanf("%d",&bank_balance);
	printf("Your bank balance is %d\n",bank_balance);
	
	printf("Enter your favourite colour:  ");
	scanf("%s",&favourite_colour);
	printf("Your favourite colour is %s",favourite_colour);

	return 0;
}