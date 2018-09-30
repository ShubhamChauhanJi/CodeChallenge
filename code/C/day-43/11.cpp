#include<stdio.h>
int main()
{
	int a[100],i,max=0,num;
	printf("enter the size of an array");
	scanf("%d",&num);
	printf("enter the element in an array");
	for(i=0;i<num;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<num;i++)
	{
		if(a[i]>max)
		{
		max=a[i];
		}
	}
	printf("Largest element %d",max);
	return 0;
}
