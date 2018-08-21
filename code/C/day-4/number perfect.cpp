/*Perfect number between 1 amd given number*/

#include<stdio.h>
int main()
{
	int i,num,j,sum=0;
	printf("enter any number=");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
       sum=0;
	   for(j=1;j<i;j++)
	   {
	       if(i%j==0)
		   {
		   	sum+=j;
		   }	
	   }	
	   if(sum==i)
	   {
	   	printf("%d\n",i);
	   }
	}
	return 0;
}
