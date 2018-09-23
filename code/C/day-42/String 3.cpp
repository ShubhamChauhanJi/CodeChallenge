#include<stdio.h>
int main()
{
	char s[100];
	int i,len=0;
	printf("enter any string without space");
	gets(s);
	for(i=0;s[i]!='\0';i++)
	{
		len++;
	}
	printf("length of the %s is %d",s,len);
	return 0;
}
