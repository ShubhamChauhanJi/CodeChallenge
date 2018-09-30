#include<stdio.h>
int main()
{
	int a[100],b[100],size,i,j;
	printf("enter the size");
	scanf("%d",&size);
	printf("enter the element in an array");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=size-1;j=0;i>=0;i--,j++)
	{
	
			b[j]=a[i];
    	
	}
	for(i=0;i<size;i++)
	{
		printf("%d",b[i]);
	}
	return 0;
}
