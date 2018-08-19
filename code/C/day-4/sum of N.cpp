/*sum of n number*/

#include<stdio.h>
int main()
{
	int num,i,sum=0;
	printf("enter the limit to be sum of the number");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		sum+=i;
	}
	printf("%d",sum);
	return 0;
}
