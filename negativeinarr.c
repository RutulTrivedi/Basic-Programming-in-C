#include<stdio.h>

void main()
{
	int n,count=0,i;
	
	printf("Enter the length of array : ");
	scanf("%d",&n);
	
	int a[n];
	
	printf("Enter the elements of array  ");
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
		if(a[i]<0)
		{
			count=count+1;
		}
	}
	
	printf("Total number of negative elements are %d.",count);
}
