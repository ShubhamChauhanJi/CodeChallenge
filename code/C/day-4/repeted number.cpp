/*Check wheather there are repeated digits in given Number*/

#include<stdio.h>
int main()
{
	int i,k,num,rem,sum=0,frequency[9],flag=0;
	printf("enter the any number=");
	scanf("%d",&num);
	for(i=1;i<=10;i++)
	{
		frequency[i]=0;
		
	}
	while(num>0)
	{
		k=num%10;
		frequency[k]++;
		num=num/10;
	}
	for(i=1;i<=10;i++)
	{
	
	if(frequency[i]>1)
	{
		flag=1;
		printf("%d is repeted in this number=%d times\n",i,frequency[i]);
		
	}
}
	if(flag==0)
	{
		printf("no repeted\n");
	}

	return 0;
}
