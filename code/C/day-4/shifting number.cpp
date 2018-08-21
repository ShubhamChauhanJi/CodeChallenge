/*arrange zero left side and Onces right side in Array*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,size,temp,j;
	printf("enter size of array:");
	scanf("%d",&size);
	int a[size];
	printf("enter 1's and 0's only\n");
	for(i=0;i<=size;i++)
	{
		scanf("%d",&a[i]);
		if(!(a[i]==0 || a[i]==1))
		{
			printf("please enter either 0 or 1=\n");
			exit(0);
			
		}
	}
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
		
		if(a[i]>a[j])
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
}
for(i=0;i<size;i++)
{
	printf("%d\n",a[i]);
}
return 0;
}
