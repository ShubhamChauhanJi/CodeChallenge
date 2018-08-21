/*Find wheather given number is Strong or not*/

#include<stdio.h>
#include<math.h>
int Getfactorial(int number);
int main()
{
	 int num,i,j,temp,sum=0,rem;
	 printf("enter any number=");
	 scanf("%d",&num);
	 temp=num;
	 while(num>0)
	 
	 {
	 	rem=num%10;
	 	sum+=Getfactorial(rem);
	 	num=num/10;
	 }
	 if(sum==temp)
	 {
	 	printf("Given number %d is an strong number",sum);
	 }
	 else
	 {
	 	printf("given number %d is not strong number since the sum of factprical of individual digits is %d\n",temp,sum);
	 }

}
int GetFactorial(int number)
{

     int factorial=1,i;
     for(i=1;i<=number;i++)
	{
		factorial=factorial*i;
	}
	return factorial;
}
