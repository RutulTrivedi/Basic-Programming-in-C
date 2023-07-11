#include<stdio.h>

void main(){
	int num;
	printf("Enter number : ");
	scanf("%d",&num);
	
	printf("Last digit of given number : %d\n",num%10);
}
