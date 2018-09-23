#include<stdio.h>
int main()
{
	char c;
	printf("enter any character");
	scanf("%c",&c);
	if(c=='A'|| c=='a' || c =='E'|| c=='e'|| c=='I'|| c=='i' || c=='O'|| c=='o' ||c=='U'|| c=='u')
	{
		printf("%c is a vowel",c);
	}
	else
	{
		printf("%c is not vowel that is consonant",c);
	}
	return 0;
}
