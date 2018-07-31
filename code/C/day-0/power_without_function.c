#include <stdio.h>

int main()
{
    int i,num1,num2,ans=1;
	
	printf("enter the any two number");
	scanf("%d%d",&num1,&num2);
	while(num2>=1)
	{
		ans=ans*num1;
		num2--;
		
	}
printf("result=%d",ans);
    return 0;
}
