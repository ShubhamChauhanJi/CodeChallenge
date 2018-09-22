/*to print the reverse of a given number*/

#include<stdio.h>
int main()
{
	int num,rem;
	printf("enter any number");
	scanf("%d",&num);
	printf("reversr of a given number=");
	while(num>0)
	{
		rem=num%10;
		printf("%d",rem);
		num=num/10;
	}

	return 0;
}
