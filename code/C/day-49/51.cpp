#include<stdio.h>
int main()
{
	int a[100],i,sum=0,size;
	float avg;
	printf("enter the size of an array");
	scanf("%d",&size);
	printf("enter the element in an array");
	for(i=0;i<size;i++)
	{
		printf("%d",a[i]);
		sum+=a[i];
	}
	avg=(float)sum/size;
	printf("%f\n",avg);
	printf("%d\n",sum);
	for(i=0;i<size;i++)
	{
		printf("given array= %d\n",a[i]);
	}
	return 0;
}
