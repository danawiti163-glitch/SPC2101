/*
Name:Dan Ochieng Awiti
Reg no:PA106/G/28773/25
Description:Program for a library book tracker
*/
#include<stdio.h>
#include<stdlib.h>

struct Student
{
	char name[50];
	int RegNo;
	float marks;
};

int main(){
	FILE *fp;
	struct Student s;
	
	fp=fopen("C:\\Users\\ADMIN\\OneDrive\\Desktop\\Practise examples\\prac 3\\Student_Examination_Results","rb");
	if(fp==NULL){
		printf("\nError opening results.dat!");
		return 1;
  }
printf("STUDENT EXAMINATION RESULTS");

while(fread(&s,sizeof(struct Student),1,fp)){
	printf("\nName:%s",s.name);	
	printf("\nReg No:%d",s.RegNo);
	printf("\nMarks:%.2f",s.marks);
}
fclose(fp);	

	
	
	
	
	
	return 0;
}