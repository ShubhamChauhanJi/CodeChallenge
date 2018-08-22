/*Print Sine value Mathematically*/

#include<stdio.h>
#include<math.h>
int factorial(int);
 main()
{
	int accuracy,count=0,k=1;
	float x,temp,sine=0;
	printf("enter the value in(degree) to find the Sin value=\n");
	scanf("%f",&x);
	temp=x;
	x=(float)x*(3.14/180);
	printf("enter value to get more accurate\n 3 for least and more for more accuracy\n");
	scanf("%d",&accuracy);
	do
	{
		if(count%2==0)
		{
			sine=(float)sine+(pow(x,k)/factorial(k));
		}
		if(count%2==1)
		{
			sine=(float)sine-(pow(x,k)/factorial(k));
		}
		count++;
		k=k+2;
	}
	while(count<=accuracy);
	printf("Sine(%f)=%f calculate mathematicall y\n",temp,sin(x));
	printf("Sine(%f)=%f calculate using library function\n",temp,sin(x));
	
	
}
int factorial(int val)
{
	int factorical=1,i;
	for(i=1;i<=val;i++)
	{
		factorical=factorical*i;
	}
	return(factorical);
}
