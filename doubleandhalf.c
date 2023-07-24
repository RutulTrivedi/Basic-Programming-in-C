#include<stdio.h>

void main()
{
	int n,product,quotient;
	
	printf("Enter the number :");
	scanf("%d",&n);
	
	product=n<<1;
	quotient=n>>1;
	
	printf("Double of the number will be : %d\n",product);
	printf("Half of the number will be : %d",quotient);
}
