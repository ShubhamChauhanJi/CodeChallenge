/*Given number is Palindrom or not*/

#include<stdio.h>
int main()
{
	int num,temp,rem,sum=0;
	printf("enter any number");
	scanf("%d",&num);
	temp=num;
	while(num>0)
	{
		rem=num%10;
		sum=sum*10+rem;
		num=num/10;
		
	}
	if(temp==sum)
	{
		printf("given number is palindrom=%d",sum);
	}
	else
	{
		printf("given number is not palindrom=%d",sum);
	}
	return 0;
}
