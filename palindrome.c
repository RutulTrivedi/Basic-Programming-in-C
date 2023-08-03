//Number palindrome

#include<stdio.h>

void main()
{
	int n,temp,pal=0,r;
	
	printf("Enter the number : ");
	scanf("%d",&n);
	
	temp=n;
	
	while(n!=0)
	{
		r=n%10;
		pal=pal*10+r;
		n=n/10;
	}
	
	if(pal==temp)
	{
		printf("Palindrome");
	}
	
	else
	{
		printf("Not palindrome");
	}
	return;
}
