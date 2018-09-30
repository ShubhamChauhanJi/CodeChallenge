/*delete a specific element*/
#include<stdio.h>
int main()
{
	int a[100],i,size,num,k;
	printf("enter the size");
	scanf("%d",&size);
	printf("enter the element in an array");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the element to deleted");
	scanf("%d",&num);
	for(i=0;i<size;i++)
	{
		if(a[i]==num)
		{
			for(k=i;k<size;k++)
			{
				a[k]=a[k+1];
			}
			size--;
		}
	}
	printf("after delete");
	for(i=0;i<size;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}
