/*fabonacci series*/

#include<stdio.h>
int main()
{
	int a=0,b=1,count=0,num,c;
	printf("enter any number");
	scanf("%d",&num);
	printf("print fabonacci series\n");
	printf("%d\t%d\t",a,b);
	count=2;
	while(count<num)
	{
		c=a+b;
		a=b;
		b=c;
		printf("%d\t",c);
		count++;
		
	}
	
	
	
	return 0;
}
