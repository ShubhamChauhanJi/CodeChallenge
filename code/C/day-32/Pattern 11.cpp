/*
1
2 2 
3 3 3
4 4 4 4
5 5 5 5 5
*/
#incude<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(i>=j)
			{
				printf(" %d",i);
			}
		}
		printf("\n");
	}
	return 0;
}
