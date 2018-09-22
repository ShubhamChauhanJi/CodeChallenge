#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the first number");
	scanf("%d",&a);
	printf("enter the secound number");
	scanf("%d",&b);
	printf("enter the third number");
	scanf("%d",&c);
	if(a>b && a>c)
	printf("a is greater = %d",a);
	else if(b>a && b>c)
	printf("b is greater = %d",b);
	else
	printf("c is greater =%d",c);
	return 0;
	
}
