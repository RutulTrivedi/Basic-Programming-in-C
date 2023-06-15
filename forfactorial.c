#include<stdio.h>

void main()
{
	int fac=1,i,n;
	
	printf("Enter the value of n : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		fac=fac*i;
	}
	
	printf("Factorial will be %d",fac);
	return;
}
