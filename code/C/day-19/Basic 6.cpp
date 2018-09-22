#include<stdio.h>
int main()
{
	int a,b,c;
printf("enter the first number =");
scanf("%d",&a);
printf("enter the secound number =");
scanf("%d",&b);
c=a+b;
a=c-a;
b=c-b;
printf("after swapping = %d\n",a);
printf("after swapping = %d",b);
return 0;
}
