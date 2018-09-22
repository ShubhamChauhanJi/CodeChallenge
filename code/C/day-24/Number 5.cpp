/*addision of number divisble by 2 of N limit*/

#include<stdio.h>
int main()
{
	int i,num1,num2,sum=0;
	printf("enter the first number");
	scanf("%d",&num1);
	printf("enter the secound number");
	scanf("%d",&num2);
	for(i=num1;i<=num2;i++)
	{
		if(i%2==0)
		sum+=i;
	}
	printf("the sum of between %d and %d = %d",num1,num2,sum);
	return 0;
	
}
