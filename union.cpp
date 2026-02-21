#include<stdio.h>
union student
{
	int rno;
	char name[10];
	float per;
};
int main()
{
	union student s = {222,"sowmya",9.500};
	printf("%d %s %f",s.rno,s.name,s.per);
	return 0;-
}
