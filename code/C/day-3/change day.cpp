/*given days to change in to year,week,days*/

#include<stdio.h>
int main()
{
	int d,y,w,da;
	printf("enter the days");
	scanf("%d",&d);
	y=d/365;
	w=(d%365)/7;
	da=(d%365)%7;
	printf("year=%d\nweek=%d\ndays=%d\n",y,w,da);
	return 0;
	
}
