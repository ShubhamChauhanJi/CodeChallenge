/*Palindrom number*/

#include<stdio.h>
int main()
{
	int num,rem,temp,rev=0;
	printf("enter any number");
	scanf("%d",&num);
	temp=num;
	while(num>0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	printf("reversr of a given number = %d\n",rev);
	if(temp==rev)
	printf("\ngiven number %d is palindrom",rev);
	else
	printf("\ngiven number %d is not palindrom",rev);
	return 0;
}
