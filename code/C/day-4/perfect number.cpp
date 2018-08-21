/*check wheather number is perfect number or not*/

#include<stdio.h>
int main()
{
	int i,num,sum=0;
	printf("enter any number");
	scanf("%d",&num);
	for(i=1;i<num;i++)
	{
		if(num%i==0)
		{
			sum+=i;
		}
		
	}
	if(sum==num)
	{
		printf("given number is %d is perfect\n",num);
		
	}
	else
	{
		printf("given number is %d not perfect becayse the sum of its divisors are %d\n",num,sum);
	}
	return 0;
}
