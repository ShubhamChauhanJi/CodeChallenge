#include<stdio.h>
#include<conio.h>
void main()
{
	int num,f=1;
	printf("enter any number");
	scanf("%d",&num);
	while(num>1)
	{
		f=f*num;
		num--;
	}
	printf("the factorical of given number= %d",f);
	getch();
}
