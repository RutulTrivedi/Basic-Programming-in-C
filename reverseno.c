#include<stdio.h>

void main()
{
	int n,r,nn;
	
	printf("Enter the number : ");
	scanf("%d",&n);
	
	while(n!=0)
	{
		r=n%10;
		nn=nn*10+r;
		n=n/10;
	}
	
	printf("Reverse number will be %d",nn);
	return;
}
