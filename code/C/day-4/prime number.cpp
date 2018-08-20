/*Print all Prime number withen given number*/

#include<stdio.h>
int main()
{
	int num,i,count=0;
	printf("enter the limit=");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			printf("%d",i);
		}
	}
	return 0;
}
