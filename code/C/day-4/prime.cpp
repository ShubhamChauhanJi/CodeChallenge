/*To know wheather given number is Prime or not*/

#include<stdio.h>
int main()
{
	int i,num;
	printf("enter any prime number");
	scanf("%d",&num);
	for(i=2;i<=num;i++)
	{
		if(num%i!=0)
		{
			printf("Given number is prime=%d",num);
		}
		else
		{
			printf("Given number is not prime=%d",num);
		}
	}
	return 0;
}
