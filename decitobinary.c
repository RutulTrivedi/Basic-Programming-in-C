#include<stdio.h>

void main()
{
	int n,rm,bn=0,p=1;
	
	printf("Enter the number : ");
	scanf("%d",&n);
	
	while(n!=0)
	{
		rm=n%2;
		n=n/2;
		bn=bn+(rm*p);
		p=p*10;
	}
	
	printf("%d",bn);
}
