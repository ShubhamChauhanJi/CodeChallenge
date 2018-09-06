/*Sum and Difference of Two Numbers*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a,b,add1,sub1;
    float p,q,add2,sub2;
    scanf("%d%d",&a,&b);
    scanf("%f%f",&p,&q);
    add1=a+b;
    sub1=a-b;
    add2=p+q;
    sub2=p-q;
    printf("%d\t%d\n%0.1f\t%0.1f",add1,sub1,add2,sub2);
    
    return 0;
}
