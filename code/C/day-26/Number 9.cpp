/*aramstrong number*/

#include<stdio.h>
int main()
{
	int temp,rem,sum=0,num;
	printf("enter any number");
	scanf("%d",&num);
	temp=num;
	while(num>0)
	{
		rem=num%10;
		sum+=(rem*rem*rem);
		num=num/10;
	}
	if(temp==sum)
	printf("number is aramstrong= %d",sum);
	else
	printf("number is not aramstrong =%d",sum);
	return 0;
}
