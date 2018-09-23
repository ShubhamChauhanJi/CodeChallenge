#include<stdio.h>
int main()
{
	int i,num,rem,sum=0,count=0,temp1,temp2;
	printf("enter any number");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{
		temp1=i;
		temp2=i;
		sum=0;
		while(temp1>0)
		{
			rem=temp1%10;
			sum+=(rem*rem*rem);
			temp1=temp1/10;
		}
		if(temp2==sum)
		printf("%d\t",sum);
	}
	return 0;
}
