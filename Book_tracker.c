/*
Name:Dan Ochieng Awiti
Reg no:PA106/G/28773/25
Description:Program for a library book tracker
*/
#include<stdio.h>
#include<stdlib.h>
int main (){
	FILE*fptr;
	char title[100];
	
	fptr=fopen("C:\\Users\\ADMIN\\OneDrive\\Desktop\\Practise examples\\prac 3\\borrowed_books.txt","a");                                         
	if(fptr==NULL){
		printf("\nError opening file!");
		return 1;
		
	}
printf("Enter the title of the book: ");
fgets(title,sizeof(title),stdin);

fprintf(fptr,"%s",title);

fclose(fptr);	
	
printf("\nBook title successully storedin borrowed books");	
	

	return 0;
}