#include<stdio.h>

void main()
{
	int n,sum=0;
	
	printf("Enter the number : ");
	scanf("%d",&n);
	
	sum=n%10;
	
	while(n>=10)
	{
		n=n/10;
	}	
		
	sum=sum+n%10;
	
	printf("Sum will be %d.",sum);
	return;
}
