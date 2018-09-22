/*print all the prime number based*/

#include<stdio.h>
int main()
{
	int num,i,j,count=0;
	printf("enter the limit of a number");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		count=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			count++;
		}
		
	    if(count==2)
	    printf("%d",i);
	   
    	
	}
	return 0;
	
}
