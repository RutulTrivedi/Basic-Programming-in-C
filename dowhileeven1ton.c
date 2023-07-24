//Printing even numbers between two given numbers do-while loop.
#include<stdio.h>

void main()
{
	int a,b,i;
	
	printf("Enter first number : ");
	scanf("%d",&a);
	
	printf("Enter second number : ");
	scanf("%d",&b);
	
	do
	{
		if(a%2==0)
		{
			printf("%d\n",a);
			a++;
		}
		a++;
	}
	while(a<=b);
}
