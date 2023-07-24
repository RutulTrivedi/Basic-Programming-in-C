//Printing 1 to n using while loop.
#include<stdio.h>

void main()
{
	int i=1,n;
	
	do
	{
		printf("%d\n",i);
		i++;
	}
	while(i<=10);
	
	i=1;
	
	printf("\n\n");
	
	printf("Enter the value of n :");
	scanf("%d",&n);
	
	do
	{
		printf("%d\n",i);
		i++;
	}
	while(i<=n);
}
