#include<stdio.h>
struct address
{
	char street[10];
	char city[10];
	long int pincode;
};
struct student
{
	int rno;
	char name[10];
	float per;
	struct address a;
};
int main()
{
	struct student s= {101,"vijaya",9.50,{"ADB road","KKD",527721}};
	printf("%d %s %f %s %s %ld",s.rno,s.name,s.per,s.a.street,s.a.city,s.a.pincode);
	return 0;
}
