/*insert at element in an array*/
#include<stdio.h>
int main()
{
	int a[100],temp[100],pos,i,size,num;
	printf("enter the size");
	scanf("%d",&size);
	printf("enter the element in an array");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter a number=\n");
	scanf("%d",&num);
	printf("enter the position=\n");
	scanf("%d",&pos);
	pos=pos-1;
	for(i=0;i<=size;i++)
	{
		if(i<pos)
		{
			temp[i]=a[i];
		}
		else if(i>pos)
		{
			temp[i]=a[i-1];
		}
		else{
			temp[i]=num;
		}
	}
	printf("after inserting the element=\n");
	for(i=0;i<=size;i++)
	{
		printf("%d\t",temp[i]);
	}
	return 0;
}
