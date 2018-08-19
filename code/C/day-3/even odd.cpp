/*print even and odd program*/

#include<stdio.h>
int main()
{
	int num;
	printf("enter any number");
	scanf("%d",&num);
	if(num%2==0)
	{
		printf("given number is even", num);
		
	}
	else
	{
		printf("given number is odd",num);
		
	}
	return 0;
}
