#include<stdio.h>
int main()
{
	int i,j,num,count=0,max=1;
	printf("enter any number");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
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
			if(max<i)
			{
				max=i;
			}
	    }
	}
	printf("%d\t",max);
	
	
	return 0;
}
