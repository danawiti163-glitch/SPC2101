/*
Name:Dan Awiti
Reg no:PA106/G/28773/25
Description:Program to display random number
*/
#include<stdio.h>
int main()
{
	int number=11;
	int Guess,attempts=1;
		
		printf("Guess the secret number betweeen 1 and 20: \n");
	while(1)
	{
	printf("Enter your Guess:  ");
	scanf("%d",&Guess);
	attempts++;
	if(Guess>number)
		printf("Too high! \n");
	else if(Guess<number)
		printf("Too low! \n");
	else{
		printf("Congratulations!You guessed it corrrectly");
		break;
	}
    }
	return 0;
}
	
	
	
	
	
	
	
	
	
	
	


