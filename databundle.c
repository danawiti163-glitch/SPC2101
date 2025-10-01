/*
NAME:DAN AWITI
REG NO:PA106/G/28773/25
DESCRIPTION:PROGRAM TO DISPLAY MOBILE DATA BUNDLE PURCHASE
*/
#include<stdio.h>
int main()
{
	int data_bundle;
	int cost;
	int num;
	printf("Select data bundle:  \n");
	printf("\n1. 100MB @50 KES");
	printf("\n2. 500MB @200 KES");
	printf("\n3. 1GB @350 KES");
	printf("\n4. 2GB @600 KES");
	printf("\nEnter your choice(1-4): ");
	scanf("%d",&num);
	
	switch (num){
		case 1:
		cost=50;
		printf("You selected 100MB bundle,cost=%d KES\n",cost);
		break;
	    case 2:
  	    cost=200;
  	    printf("You selected 500MB bundle,cost=%d KES\n",cost);
  	    break;
  	    case 3:
  	    cost=350;
  	    printf("You selected 1GB bundle,cost=%d KES\n",cost);
  	    break;
  	    case 4:
  	    cost=600;
		printf("You selected 2GB bundle,cost=%d KES\n",cost);
		break;
	    default:
     	printf("Invalid choice!Please select between 1 and 4\n");
	}
    	return 0;
} 	
			
	
