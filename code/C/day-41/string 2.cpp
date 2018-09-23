#include<stdio.h>
int main()
{
	char s[100];
	int i,count=0;
	printf("enter any string without space");
	scanf("%s",&s[i]);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]=='A'|| s[i]=='a' || s[i] =='E'|| s[i]=='e'|| s[i]=='I'|| s[i]=='i' || s[i]=='O'|| s[i]=='o' ||s[i]=='U'|| s[i]=='u')
		count++;
	}
	if(count==0)
	{
		printf("in given string is no vowel present");
		
	}
	else
	{
		printf("vowel %s is repeated %d times\n",s,count);
	}
	return 0;
}
