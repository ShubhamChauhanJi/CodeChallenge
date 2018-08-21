/*Aramstrong number between 1 and given number*/

#include<stdio.h>
#include<math.h>
int main()
{
	int num,i,rem,temp1,temp2,sum=0;
	printf("Enter any number");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		sum=0;
		temp1=i;
		temp2=i;
		while(temp1>0)
		{
		
		rem=temp1%10;
		sum+=pow(rem,3);
		temp1=temp1/10;
	}
	
	if(temp2==sum)
	{
		printf(" aramstrong number= %d\n",sum);
	}
}
	return 0;
}
