/*seprate even and odd number*/
#include<stdio.h>
int main()
{
	int a[100],size,i;
	printf("enter the element in an array");
	scanf("%d",&size);
	printf("enter the element in an array");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("even number");
	for(i=0;i<size;i++)
	{
		if(a[i]>0)
		{
			if(a[i]%2==0)
			{
				printf("%d\t",a[i]);
			}
		}
	}
	printf("\nodd number");
	for(i=0;i<size;i++)
	{
		if(a[i]>0)
		{
			if(a[i]%2!=0)
			{
				printf("%d\t",a[i]);
			}
		}
	}
	return 0;
	
}
