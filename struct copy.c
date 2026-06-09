#include<stdio.h>
#include<string.h>
struct student
{
	int rno;
	char name[15];
};
int main()
{
	struct student student1, student2;
	strcpy(student1.name, "vijaya");
	student1.rno = 222;
	student1 = student2;
	printf("name : %s, rno: %d \n",student1.name,student2.rno);
	return 0;
};

