/*P*/

#include<stdio.h>
int main()
{
	int i,j,num,temp,flag=0,frequency[9],k;
	printf("enter any number");
	scanf("%d",&num);
	temp=num;
	for(i=0;i<10;i++)
	{
		frequency[i]=0;
	}
	while(num>0)
	{
	
		k=num%10;
		frequency[k]++;
		num/=10;
	}	
	for(i=0;i<10;i++)
	{
		if(frequency[i]>1)
		{
			flag=1;
			printf("%d repeted %d times",i,frequency[i]);
			
		}
	}
	if(flag=0)
	{
	printf("no repitation");
	}
	else
	{
		printf("repetation digit are there");
	}
	return 0;
}
