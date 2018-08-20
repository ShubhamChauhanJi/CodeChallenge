/*To know wheather given number is Prime or not*/

#include<stdio.h>
int main()
{
	int i,num,count=0;
	printf("enter any prime number=");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			count++;
			
	    }
    }
    if(count==2)
	{
		printf("Given number is prime=%d\n\n",num);
	}
	else
	{
	    printf("given number is not a prime=%d\n\n",num);
	    printf("Because this number is divisble by=\n");
	    for(i=1;i<=num;i++)
	    {
	    	if(num%i==0)
	    	{
	    		
	    		printf("%d\n",i);
			}
		}
	}
		
	
	return 0;
}
