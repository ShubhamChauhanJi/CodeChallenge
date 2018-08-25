/*Find quadrent of Given Co-ordinates*/

#include<stdio.h>
int main()
{
	 float a,b;
	 printf("enter the two co-ordinates");
	 scanf("%f%f",&a,&b);
	 if(a>0 && b>0)
	 {
	 	printf("Co-ordinates (%f,%f) lies in first quardent\n ");
	 	
	 }
	 else if(a<0 && b>0)
	 {
	 	printf("Co-ordinates (%f,%f) lies in secound quardent\n ",a,b);
	 }
	 else if(a<0 && b<0)
	 {
	 	printf("Co-ordinates (%f,%f) lies in third quardent\n ",a,b);
	 }
	 else if(a>0 && b<0)
	 {
	 	printf("Co-ordinates (%f,%f) lies in fourth quardent \n",a,b);
	 }
	 else if(a==0 && b==0)
	 {
	 	printf("Co-ordinates (%f,%f) lies in  zero rigin\n",a,b);
	 }
	 return 0;
}
