/*print 1 to 255 ASCII value*/
#include <stdio.h>

int main()
{
    int a=0;
    while(a<=255)
    {
        printf("%d=%c\n",a,a);
        a++;
    }
    return 0;
}

/* print ASCII value enter your choice*/

#include <stdio.h>


int main()

{
    
	char ch;

         int a;
    
	printf("enter any character");
    
	scanf("%c",&ch);
  
  	a=ch;
    
	{
        
		printf("%d\n",a);
        
    
	}
    
	return 0;
}