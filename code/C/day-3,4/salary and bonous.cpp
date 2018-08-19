/*write a program to count salary and bonous with in some condition*/

#include<stdio.h>
int main()
{
	
	float bonous,salary;
	char gen;
	printf("enter the gender");
	scanf("%c",&gen);
	printf("enter the salary");
	scanf("%f",&salary);
	if(gen=='M' || gen=='m')
	{
	    if(salary>10000)
	    bonous=salary*0.05;
	    else
	    bonous=salary*0.02;
	    
    }
    if(gen=='F' || gen=='f')
    {
    	if(salary>10000)
    	bonous=salary*0.01;
    	else
    	bonous=salary*0.12;
	}
	salary+=bonous;
	printf("bonous=%f",bonous);
	printf("total salary=%f",salary);
	return 0;
}

