/*Sum of all digits in a number*/

#include<stdio.h>
int main()
{
	int num,rem,sum=0;
	printf("enter any number");
	scanf("%d",&num);
	while(num>0)
	{
		rem=num%10;
		sum+=rem;
		num=num/10;
		
	}
	printf("total of digits=%d",sum);
	return 0;
}
