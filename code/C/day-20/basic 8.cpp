#include<stdio.h>
int main()
{
	int y;
	printf("enter any year");
	scanf("%d",&y);
	if(y%400==0)
	printf("given year %d is leap year",y);
	else if(y%100==0)
	printf("given Year %d is leap year",y);
	else if(y%4==0)
	printf("given year %d is leap year");
	else
	printf("given year %d is not leap year");
	return 0;
}
