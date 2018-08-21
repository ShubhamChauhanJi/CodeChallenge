/*Check wheather number is Armstrong number or not*/

#include<stdio.h>
int main()
{
	int num,i,temp,rem,sum=0;
	printf("enter any number");
	scanf("%d",&num);
	temp=num;
	while(num>0)
	{
		rem=num%10;
		sum=sum+(rem*rem*rem);
		num=num/10;
	}
	if(temp==sum)
	{
		printf("%d == %d Equal:\n",temp,sum);
		printf("so given number is aramstrong number=%d",sum);
		
	}
	else
	{
		printf("%d == %d Not equal:\n",temp,sum);
		printf(" So %d is not a aramstrong number",temp);
	}
	return 0;
}
