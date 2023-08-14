#include<stdio.h>

void main()
{
	int i,n;
	
	for(i=1;i<=10;i++)
	{
		printf("%d\n",i);
	}
	
	printf("\n\n");
	
	printf("Enter the value of n : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf("%d\n",i);
	}	
}
