//C program to swap two numbers using pointers
#include<stdio.h>

void main(){
	int num1,num2,*pNum1,*pNum2;
	printf("Enter the first number : ");
	scanf("%d",&num1);
	
	printf("Enter the second number : ");
	scanf("%d",&num2);
	
	pNum1 = &num1;
	pNum2 = &num2;
	
	printf("\nNumbers before swapping\n");
	printf("Number 1 : %d\nNumber 2 : %d\n",num1,num2);
	
	//Swapping numbers
	int temp = *pNum1;
	*pNum1 = *pNum2;
	*pNum2 = temp;
	
	printf("\nNumbers after swapping\n");
	printf("Number 1 : %d\nNumber 2 : %d",num1,num2);
}
