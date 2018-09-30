/*find duplicate element in an array*/
#include<stdio.h>
int main()
{
	int a[100],size,i,j,count=0;
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
				count++;
				break;
			}
		}
	}
	printf("%d",count);
	return 0;
}
