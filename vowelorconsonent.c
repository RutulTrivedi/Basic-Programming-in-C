// To check whether the entered character is vowel or consonent.

#include<stdio.h>

void main()
{
	char a;
	
	printf("Enter the character :");
	scanf("%c",&a);
	
	switch(a)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':printf("It is a vowel.");
		break;
		
		default:printf("It is a consonent.");
		return;		
	}
}
