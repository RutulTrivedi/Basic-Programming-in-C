// Average of three numbers.

#include<stdio.h>

void  main()
{
	float a,b,c,avg;
	
	printf("Enter the first number :");
	scanf("%f",&a);
	
	printf("Enter the second number :");
	scanf("%f",&b);
	
	printf("Enter the third number :");
	scanf("%f",&c);
	
	avg=a+b+c;
	avg=avg/3;
	
	printf("The average of %.2f, %.2f and %.2f will be %.2f",a,b,c,avg);
	return;
}
