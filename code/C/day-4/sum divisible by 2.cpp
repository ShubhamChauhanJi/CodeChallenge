/*sum of all integer divisible by 2 between two number*/

#include<stdio.h>
int main()
{
	int num1,num2,sum=0,i;
	printf("enter any two number");
	scanf("%d%d",&num1,&num2);
	for(i=num1;i<=num2;i++)
	{
		if(i%2==0)
		sum+=i;
	}

printf("the sum of all integer divisible by 2 between %d and %d= %d",num1,num2,sum);
return 0;
}
