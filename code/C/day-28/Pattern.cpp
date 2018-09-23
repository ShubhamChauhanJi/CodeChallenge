/*

*****
*****
*****
*****
*****

*/

#include<stdio.h>
int main()
{
	int i,j,r;
	printf("enter the row limit = ");
	scanf("%d",&r);
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=5;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
