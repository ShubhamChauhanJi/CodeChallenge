/*the sum of negative and positive integer*/

#include<stdio.h>
int main()
{
	int a[100],i,size,neg=0,pos=0;
	printf("enter the size");
	scanf("%d",&size);
	printf("enter the element in an array");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<size;i++)
	{
		if(a[i]>0)
		pos+=a[i];
		if(a[i]<0)
		neg+=a[i];
	}
	printf("the sum of positive integer= %d\n",pos);
	printf("the sum of negative integer= %d",neg);
	return 0;
}
