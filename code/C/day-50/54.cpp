#include<stdio.h>
int main()
{
	int a[100],i,j,b,n;
	printf("enter the size of first array");
	scanf("%d",&n);
	printf("enter the six element in first array=");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				b=a[i];
				a[i]=a[j];
				a[j]=b;
			}
		}
    }
    printf("array in assending order=");
		for(i=0;i<n;i++)
		{
			printf("%d\t",a[i]);
		}
		printf("\n");
		printf("sorted array in desending  order= ");
		for(i=n-1;i>=0;i--)
		{
			printf("%d\t",a[i]);
		}
		
		return 0;
	}
