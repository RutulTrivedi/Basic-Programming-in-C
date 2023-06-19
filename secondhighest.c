#include<stdio.h>

void main()
{
	int a,b,c;
	
	printf("Enter first number :");
	scanf("%d",&a);
	
	printf("Enter second number :");
	scanf("%d",&b);
	
	printf("Enter third number :");
	scanf("%d",&c);
	
	if((a>b&&a<c)||(a<b&&a>c))
	{
		printf("Second highest number is %d",a);
	}
	
	if((b>a&&b<c)||(b<a&&b>c))
	{
		printf("Second highest number is %d",b);
	}
	
	if((c>a&&c<b)||(c<a&&c>b))
	{
		printf("Second highest number is %d",c);
	}
}
