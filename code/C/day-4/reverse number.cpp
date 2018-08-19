/*to print reverse of a givin number*/

#include<stdio.h>
int main()
{
	int num,sum=0,rem;
	printf("enter any number");
	scanf("%d",&num);
	while(num>0)
	{
		rem=num%10;
		sum=sum*10+rem;
		num=num/10;
	}
	printf("given number in reverse order=%d",sum);
	return 0;
	
}
