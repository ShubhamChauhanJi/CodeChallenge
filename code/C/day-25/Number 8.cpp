/*prime number*/

#include<stdio.h>
int main()
{
	int num,i,count=0;
	printf("enter any number");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		count++;
	}
	 if(count==2)
	printf("given number is %d prime =",num);
	else 
	printf("%d is not a prime number because this number is divisble by =",num);
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		printf("%d\t",i);
	}
	return 0;
}
