/*concatenatnations*/

#include<stdio.h>
int main()
{
	int a[100],b[100],c[100],i,j,n1,n2;
	printf("enter the size of first array");
	scanf("%d",&n1);
	printf("enter the six element in first array=");
	for(i=0;i<n1;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the size of secound array");
	scanf("%d",&n2);
	printf("enter the four element in secound array");
	
	for(j=0;j<n2;j++)
	{
		scanf("%d",&b[j]);
	}
	for(i=n1,j=0;i<10;i++,j++)
	{
		a[i]=b[j];
		
	}
	printf("Concatenate two array:\n\n");
	for(i=0;i<n1+n2;i++)
	{
		printf("%d\t",a[i]);
	}
}
