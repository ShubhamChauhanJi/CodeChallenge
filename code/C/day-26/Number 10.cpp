/*aramstrog number between 1 and given number*/
#include<stdio.h>
int main()
{
	int i,j,num,sum=0,rem,temp1,temp2;
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
    }
    if(sum==temp2)
	printf("%d",sum);
	return 0;
}
