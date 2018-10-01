/*merging*/

#include<stdio.h>
int main()
{
	int a[100],b[100],c[100],i,j,k,n1,n2;
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
	for(k=0;k<n1+n2;k++)
	{
		if(a[i]<b[j])
		{
			c[k]=a[i];
			
		}
		else
		{
			c[k]=b[j];
			
		}
		printf("%d\t",c[k]);
	}
	printf("after merging array=\n");
	for(k=0;k<n1+n2;k++)
	{
		printf("%d\n",a[i]);
	}
return 0;	
}
