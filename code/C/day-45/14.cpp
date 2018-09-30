/*Find the average of class*/
#include<stdio.h>
int main()
{
	int a[100],size,sum=0,num,i;
	float avg;
	printf("enter the size of an array");
	scanf("%d",&size);
	printf("enter the element of an array");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	avg=(float)sum/size;
	printf("%f",avg);
	return 0;
}
