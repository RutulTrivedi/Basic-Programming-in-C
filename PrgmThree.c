//C program to find sum of two numbers using pointers
#include<stdio.h>

void main(){
	int num1,num2,sum,*pNum1,*pNum2,*pAns;
	printf("Enter the first number : ");
	scanf("%d",&num1);
	
	printf("Enter the second number : ");
	scanf("%d",&num2);
	
	pNum1 = &num1;
	pNum2 = &num2;
	pAns = &sum;
	
	//Adding values stored at pointer pNum1 and pNum2
	*pAns = *pNum1 + *pNum2;
	printf("Sum of %d and %d is %d.",*pNum1,*pNum2,*pAns);
}
