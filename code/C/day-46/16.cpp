/*Minimum and maximum of given array*/
#include<stdio.h>
int main()
{
	int a[100],size,i,max=0,min=0;
	printf("enter the size");
	scanf("%d",&size);
	printf("enter the element in an array");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	min=a[0];
	max=a[0];
	
	for(i=0;i<size;i++)
	{
		if(max<a[i])
		max=a[i];
		if(min>a[i])
		min=a[i];
	}
	printf("maximum number in an array= %d",max);
	printf("minimum number in an array= %d",min);
	return 0;
}
