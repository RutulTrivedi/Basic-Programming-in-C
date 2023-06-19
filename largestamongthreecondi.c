#include<stdio.h>

void main()
{
	int x,y,z;
	
	printf("Enter first number :");
	scanf("%d",&x);
	
	printf("Enter second number :");
	scanf("%d",&y);
	
	printf("Enter third number :");
	scanf("%d",&z);
	
	(x>y&&x>z)?printf("%d",x):(y>x&&y>z)?printf("%d",y):printf("%d",z);
	return;
}
