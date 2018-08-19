/*Factorical of a number*/

#include<stdio.h>
int main()
{
	int num,f=1;
	printf("enter any number");
	scanf("%d",&num);
	while(num>1)
	{
		f=f*num;
		num--;
	}
	printf("Factorical of a given  number=%d",f);
	return 0;
}
