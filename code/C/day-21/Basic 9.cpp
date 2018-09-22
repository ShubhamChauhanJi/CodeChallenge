#include<stdio.h>
int main()
{
	int num,y,w,d;
	printf("enter the days");
	scanf("%d",&num);
	y=num/365;
	w=(num%365)/7;
	d=(num%365)%7;
	printf("In given number :\n Years = %d\n weeks = %d\n days = %d",y,w,d);
	return 0;
	
	
}
