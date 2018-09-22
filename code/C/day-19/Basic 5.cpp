#include<stdio.h>
int main()
{
	int i,num;
	printf("enter the limit");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		if(i%2!=0)
		printf("odd number is = %d\n",i);
	}
	printf("\n");
	for(i=1;i<=num;i++)
	{
		if(i%2==0)
		printf("even number is = %d\n",i);
	}
	return 0;
}
