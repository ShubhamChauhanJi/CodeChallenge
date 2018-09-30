#include<stdio.h>
int main()
{
	int a[100],size,i,min;
	printf("enter the size");
	scanf("%d",&size);
	printf("enter the element in an array");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	min=a[0];
	for(i=0;i<size;i++)
	{
		if(min>a[i])
		{
			min=a[i];
		}
	}
	printf("smallest element= %d",min);
	return 0;
}
