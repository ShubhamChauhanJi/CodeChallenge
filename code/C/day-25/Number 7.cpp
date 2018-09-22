/*fabonic series*/
#include<stdio.h>
int main()
{
	int a=0,b=1,c,num,i;
	printf("enter the limit");
	scanf("%d",&num);
	printf("fabonic Series = %d\t%d\t",a,b);
	for(i=1;i<=num;i++)
	{
		c=a+b;
		printf("%d\t",c);
		a=b;
		b=c;
	}
	return 0;
}
