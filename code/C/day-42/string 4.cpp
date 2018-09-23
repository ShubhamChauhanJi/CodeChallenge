#include<stdio.h>
int main()
{
	int i,count=1;
	char str[100];
	printf("enter any string");
	gets(str);
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]==' ')
		{
			count++;
		}
	}
	printf("%d\n",count);
	return 0;
}
