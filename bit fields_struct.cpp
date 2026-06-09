#include<stdio.h>
struct date
{
	int d:6;
	int m:5;
	int y;
};
int main()
{
	struct date x = {16,07,2007};
	printf("%d %d %d",x.d,x.m,x.y);
	return 0;
}
