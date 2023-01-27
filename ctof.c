// Coverting temperature from celsius to fahreneit.

#include<stdio.h>

void main()
{
	float f,c;
	
	printf("Enter the temperature in celcius :");
	scanf("%f",&c);
	
	f=c*1.8;
	f=f+32;
	
	printf("Temperature in fahreneit will be %.2f.",f);
	return;
}
