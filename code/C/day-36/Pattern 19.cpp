/*
A B C D E
A B C D
A B C
A B
A
*/
#include<stdio.h>
int main()
{
	int i,j;
	for(i=5;i>=1;i--)
	{
		for(j=0;j<i;j++)
		{
			if(i>=j)
			{
				printf(" %c",j+65);
			}
		}
		printf("\n");
	}
	return 0;
}
