/*Area of Triangle,Square,Circle,Rectangle,Parallelogram*/

#include<stdio.h>
#include<math.h>
int main()
{
	int choice;
	printf("Enter your Choice:\n1. For Triangle=\n2.For Square=\n3.For Circle=\n4.For Rectangle=\n5.For parallelogram=\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			{
				int a,b,c;
				float s,area;
				printf("enter side of triangle\n");
				scanf("%d%d%d",&a,&b,&c);
				s=(float)(a+b+c)/2;
				area=(float)(sqrt(s*(s-a)*(s-b)*(s-c)));
				printf("Area of triangle with\n first sides:%d\n Secound side:%d\n Third side:%d\n value of s:%f\n area:%f\n ",a,b,c,s,area);
				break;
			}
		case 2:
			{
				float side,area;
				printf("enter the side of square:\n");
				scanf("%f",&side);
				area=(float)side*side;
				printf("Area of square=%f",area);
				break;
				
				
			}
		case 3:
			{
				float radius,area;
				printf("enter the radius of circle");
				scanf("%f",&radius);
				area=(float)3.14*radius*radius;
				printf("Area of Square is= %f\n",area);
				break;
			}
		case 4:
			{
				float length,breath,area;
				printf("enter the Length and breadth of Rectangle:");
				scanf("%f%f",&length,&breath);
				area=(float)length*breath;
				printf("Area of Rectangle=%f",area);
				break;
				
			}
		case 5:
			{
				float base,height,area;
				printf("enter the base and height of Parallelogram:");
				scanf("%f%f",&base,&height);
				area=(float)base*height;
				printf("The Area of parallelogram=%f\n",area);
				break;
			}
		default :
		    {
		    	printf("Your choice is wrong");
		    	break;
			}
			
	}
}
