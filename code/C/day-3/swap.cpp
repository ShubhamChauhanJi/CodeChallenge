/*swapping two variables without using third variable*/

#include<stdio.h>
int main()
{
	int a,b;
	printf("enter any two number");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after swapping a is=%d\n",a);
	printf("after swapping b is=%d\n",b);
	return 0;
	
}
