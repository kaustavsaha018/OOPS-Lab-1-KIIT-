#include <stdio.h>
struct student {
   	int roll;
	char name[25];
	int marks[5];
};


void displayInfo(struct student s);
struct student getInfo();

int main(void) {
   struct student s1;
	
	s1 = getInfo();
   
   	displayInfo(s1);


}

void displayInfo(struct student s) {
   	int i;
	printf("\nStudent Name: ");
    printf(s.name);
	printf("\nStudent Roll No.: %d", s.roll);
	printf("\n5 subject marks of Student are:");
	for(i=0;i<5;i++){
		printf(" %d ", s.marks[i]);
	}
}



struct student getInfo() 
{
  struct student s;
	int i;
	printf("Enter the Name of Student: ");
    gets(s.name);  
	printf("Enter Student Roll No.: ");
	scanf("%d", &s.roll); 
	printf("Enter 5 subject marks:\n");
	for(i=0;i<5;i++){
		scanf("%d", &s.marks[i]);
	}
	return s;
}
