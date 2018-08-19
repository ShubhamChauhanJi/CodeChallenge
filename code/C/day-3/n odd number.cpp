/*to print all the odd number till 'N'*/

#include<stdio.h>
int main()
{
	int num,i;
	printf("enter any number");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		if(i%2!=0)
		printf("%d\t",i);
	}
	return 0;
}
