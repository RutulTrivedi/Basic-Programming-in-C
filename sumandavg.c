#include<stdio.h>

void main()
{
	int n=1,sum=0,count=0;
	
	printf("Enter 0 to end the input");
	while(n!=0)
	{
		printf("Enter the number : ");
		scanf("%d",&n);
		
		sum=sum+n;
		count++;
	}
	
	float avg=(float)sum/(count-1);
	
	printf("Sum will be %d and average will be %.2f.",sum,avg);
	return;
}
