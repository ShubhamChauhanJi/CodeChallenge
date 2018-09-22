/*Factorical of a given number*/

#include<stdio.h>
int main()
{
	
	int num,f=1;
	printf("enter any number = ");
	scanf("%d",&num);
	while(num>0)
	{
		f*=num;
		num--;
	}
	printf("factorical = %d",f);
	return 0;
}
