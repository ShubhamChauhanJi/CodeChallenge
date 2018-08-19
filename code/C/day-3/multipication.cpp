/*Multipilication using additision*/

#include<stdio.h>
int main()
{
	int a,b,c,i,mul=0;
	printf("enter any two number");
	scanf("%d%d",&a,&b);
	if(b<0)
	{
		a=a+b;
		b=a-b;
		c=a-b;
	}
	if(a>=0)
	{
		for(i=1;i<=a;i++)
		mul=mul+b;
	}
	if(a<0)
	{
		for(i=1;i<=-1;i++)
		mul=mul-b;
	}
	printf("answer=%d",mul);
	
}
