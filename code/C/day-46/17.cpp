/*Find highest and secound heighest element in an array*/

#include<stdio.h>

int main()
{
	int a[100],size,i,max1,max2=0;
	printf("enter the size");
	scanf("%d",&size);
	printf("enter the element in an array");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
		
	}
	max1=a[0];
	for(i=0;i<size;i++)
	{
		if(max1<a[i])
		{
			max1=a[i];
		}
    }
    for(i=0;i<size;i++)
    {
    	if(a[i]!=max1)
    	{
    		if(a[i]>max2)
    		{
    			max2=a[i];
			}
		}
	}
	printf("maximum=%d\n minimum=%d",max1,max2);
	return 0;
}
