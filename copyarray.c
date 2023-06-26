#include<stdio.h>

void main()
{
	int n,i;
	
	printf("Enter the length of array : ");
	scanf("%d",&n);
	
	int a[n],b[n];
	
	printf("Enter the elements of array  ");
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		b[i]=a[i];
	}
	printf("\n");
	printf("Copied array will be ");
	
	for(i=0;i<n;i++)
	{
		printf("%d ",b[i]);
	}
}
