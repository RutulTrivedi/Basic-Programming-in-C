//Printing odd numbers between 1 to n using do-while loop.
#include<stdio.h>

void main()
{
	int i=1,n;
	
	do
	{
		if(i%2!=0)
		{
			printf("%d\n",i);
			i++;
		}
		i++;
	}
	while(i<=10);	
	
	
	i=1;
	
	printf("\n\n");
	
	printf("Enter the value of n :");
	scanf("%d",&n);
	
	do
	{
		if(i%2!=0)
		{
			printf("%d\n",i);
			i++;
		}
		i++;
	}
	while(i<=n);
}
