#include<stdio.h>
int main()
{
	int i,j,num,rem,sum=0,temp;
	printf("enter the any number");
	scanf("%d",&num);
	temp=num;
	while(num>0)
	{
		rem=num%10;
		sum+=(rem*rem*rem);
		num=num/10;
		
	}
	if(temp==sum)
	printf("the given number is aramstrong");
	else
	printf("given number is not aramstrong");
}
