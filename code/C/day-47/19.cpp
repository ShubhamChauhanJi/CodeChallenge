/*remove the duplicace*/
#include<stdio.h>
int main()
{
	int a[100],i,size,j,k;
	printf("enter the size");
	scanf("%d",&size);
	printf("enter the element in an array");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(a[i]==a[j])
			{
				for(k=j;k<size;k++)
				{
					a[k]=a[k+1];
				}
				size--;
				j--;
			}
		}
   }
	printf("after removing element\n");
		for(i=0;i<size;i++)
		{
			printf(" %d",a[i]);
		}
	
	return 0;
}
