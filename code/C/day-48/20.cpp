/*print the all unique value*/

#include<stdio.h>
int main()
{
	int a[100],size,i,j,freq[100],count;
	printf("enter the size");
	scanf("%d",&size);
	printf("enter the element in an array");
	for (i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
		freq[i]=-1;
	}
	for(i=0;i<size;i++)
	{
		count=1;
		for(j=i+1;j<size;j++)
		{
			if(a[i]==a[j])
			{
				count++;
				freq[j]=0;
			}
		}
		if(freq[i]!=0)
		{
			freq[i]=count;
		}
	}
	printf("unique element");
	for(i=0;i<size;i++)
	{
		if(freq[i]==1)
		{
			printf("%d",a[i]);
		}
	}
	return 0;
}
