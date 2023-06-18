#include<stdio.h>

void  main()
{
	int i=1,n,a=1,b=1,c=0;
	
	printf("How many number do you want in Fibonacci Series :");
	scanf("%d",&n);
	
	printf("%d ",c);
	printf("%d ",a);
	printf("%d ",b);
	
	for(i=1;i<=n-3;i++)
	{
	c=a+b;
	a=b;
	b=c;
	printf("%d ",c);
	}
	
	return;
}
