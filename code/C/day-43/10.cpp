#include<stdio.h>
int main(){
	int a[100],loc,num,i,size;
	printf("enter the size of an element");
	scanf("%d",&size);
	printf("enter the element in an array");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the element to be search");
	scanf("%d",&num);
	for(i=0;i<size;i++)
	{
		if(num==a[i])
		{
			loc=i;
			printf("%d number present the location =%d",num,loc);
			break;
			
		}
	}
	if(i==size)
	printf("element not present in this array");
	return 0;
}

