/*merging in to array in sorted */
#include<stdio.h>
int main()
{
	int a[100],b[100],c[100],size1,size2,size3,i,j,k;
	
	printf("enter the element in an array");
	for(i=0;i<4;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("enter the element in an array");
	for(j=0;j<4;j++)
	{
		scanf("%d",&b[j]);
	}
	for(i=0;i<4;i++)
	{
       for(j=0;j<4;j++)
       {
	       for(k=0;k<8;k++)
	       {	
	           if(a[i]<b[j])
		       {
				c[k]=a[i];
			
			   }
				else
				{
							c[k]=b[j];
		
				}
			}
		}
	}
   printf("after merging array=");
   for(k=0;k<8;k++)
   {
   	printf("%d\t",c[k]);
   }
   return 0;
}
