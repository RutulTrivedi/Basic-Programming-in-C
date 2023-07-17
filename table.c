#include<stdio.h>

void main()
{
	int n,i=1,j=1;
	
	printf("Enter the number : ");
	scanf("%d",&n);
	
	while(i<=10)
	{
		printf("%d x %d = %d\n",n,i,n*i);
		i=i+1;		
	}
}
