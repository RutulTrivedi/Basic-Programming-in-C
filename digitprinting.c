#include<stdio.h>

void main()
{
	int n,r,sum=0,on,nn=0;
	
	printf("Enter the number : ");
	scanf("%d",&n);
	
	on=n;
	
	while(n!=0)
	{
		r=n%10;
		printf("%d\n",r);
		n=n/10;
	}
	return;
}
