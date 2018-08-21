/*Prime number between two given number*/

#include<stdio.h>
int main()
{
	int num1,num2,i,j,count=0;
	printf("enter any two number=\n");
	scanf("%d%d",&num1,&num2);
	printf("The prime number between %d and %d are=\n",num1,num2);
	for(i=num1;i<=num2;i++)
	{
		count=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				count++;
			}
		}
		if(count==2)
		{
			printf("%d\n",i);
		}
	}
	return 0;
}
