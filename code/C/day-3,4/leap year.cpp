/*to check given year is leap year or not*/

#include<stdio.h>
int main()
{
	int year;
	printf("enter any year");
	scanf("%d",&year);
	if(year%400==0)
	{
		printf("given year %d is leap year",year);
	}
	else if(year%100==0)
	{
		printf("given year %d is leap year",year);
	}
	else if(year%4==0)
	{
		printf("given year %d is leap year",year);
	}
	else
	{
		printf("given year %d is not leap year",year);
	}
	return 0;
	
}
