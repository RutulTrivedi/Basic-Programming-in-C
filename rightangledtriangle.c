// To check whether the side of triangle entered is a right angled triangle or not.
// Pythagorous Theorm

#include<stdio.h>
#include<math.h>

void main()
{
	int a,b,c,p,q,r;
	
	printf("Enter first side of triangle : ");
	scanf("%d",&a);
	printf("Enter second side of triangle : ");
	scanf("%d",&b);
	printf("Enter third side of triangle : ");
	scanf("%d",&c);
	
	p=sqrt((a*a)+(b*b));
	q=sqrt((b*b)+(c*c));
	r=sqrt((c*c)+(a*a));

	if(p==c||q==a||r==b)
	{
		printf("Right angle triangle");
	}
	 
	else
	{
		printf("Not Right angle triangle");
	}
}
