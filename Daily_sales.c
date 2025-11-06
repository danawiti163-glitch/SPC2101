/*
Name:Dan Ochieng Awiti
Reg no:PA106/G/28773/25
Description:Program for a library book tracker
*/
#include<stdio.h>
#include<stdlib.h>

int main(){
	FILE *fp;
	float amount,total =0.0;
	
	fp=fopen("C:\\Users\\ADMIN\\OneDrive\\Desktop\\Practise examples\\Daily_Sales_Transaction.txt","r");
	if(fp==NULL){
		printf("\nError opening sales.txt!");
		return 1;
		
	}
	while(fscanf(fp,"%f",&amount)==1){
		total+=amount;
		
	}
	fclose(fp);
	printf("\nTotal sales for the day:$%.2f",total);
	
	return 0;
}