/*sum of N number*/

#include<stdio.h>
int main()
{
	int i,num,a=0;
	printf("enter the number limit");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		a+=i;
	}
	printf("Sum =%d",a);
	return 0;
}
