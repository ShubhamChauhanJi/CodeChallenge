#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the first number =");
	scanf("%d",&a);
	printf("enter the secound number =");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after swapping = %d\n ",a);
	printf("after swapping = %d ",b);
	return 0;
	
}
