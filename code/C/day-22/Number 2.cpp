/*Sum of all Digit in a number*/

#include<stdio.h>
int main()
{
	int num,i,sum=0,rem;
	printf("enter any number");
	scanf("%d",&num);
	while(num>0)
	{
		rem=num%10;
		sum+=rem;
		num=num/10;
	}
	printf("sum of digit in given number= %d",sum);
	return 0;
}
