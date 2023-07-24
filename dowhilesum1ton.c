//Printing sum of 1 to n numbers using do-while loop.

#include<stdio.h>

void main()
{
	int i=1,n,sum=0;
	
	printf("Enter the value of n : ");
	scanf("%d",&n);
	
	do
	{
		sum=sum+i;
		i++;
	}
	while(i<=n);
	
	printf("Sum will be %d.",sum);
}
