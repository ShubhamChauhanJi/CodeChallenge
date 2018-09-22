#include<stdio.h>
int main()
{
	int num;
	printf("enter any number");
	scanf("%d",&num);
	if(num%2==0)
	{
		printf("given number %d is even",num);
		
	}
	else
	{
		printf("given number %d is odd",num);
	}
	return 0;
}
