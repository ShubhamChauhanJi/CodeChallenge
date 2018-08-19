/*Swap two number using third variable*/

#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter any two number");
	scanf("%d%d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("after the swapping a is= %d\n ",a);
	printf("after the swapping b is= %d\n",b);
	return 0;
}
