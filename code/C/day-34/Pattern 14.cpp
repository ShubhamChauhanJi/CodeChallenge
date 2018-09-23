/*
A
A B
A B C
A B C D
A B C D E
*/
#include<stdio.h>
int main()
{
	int i,j;
	for(i=65;i<=69;i++)
	{
		for(j=65;j<=69;j++)
		{
			if(i>=j)
			{
				printf(" %c",j);
			}
		}
		printf("\n");
	}
	return 0;
}
