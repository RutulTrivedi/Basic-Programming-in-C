#include<stdio.h>

void main()
{
	int n,y;
	
	printf("Enter the year : ");
	scanf("%d",&y);
		
	a:
	{
		printf("Enter the number : ");
		scanf("%d",&n);
	}
	
	switch(n)
	{
		case 1:printf("Jan - 31 Days");
			break;
		case 2:
			if(y%4==0&&y%100!=0)
			{
				printf("Feb - 29 Days");
			}
			else
			{
				printf("Feb - 28 Days");
			}
			break;
		case 3:printf("Mar - 31 Days");
			break;
		case 4:printf("Apr - 30 Days");
			break;
		case 5:printf("May - 31 Days");
			break;
		case 6:printf("Jun - 30 Days");
			break;
		case 7:printf("Jul - 31 Days");
			break;
		case 8:printf("Aug - 31 Days");
			break;
		case 9:printf("Sept - 30 Days");
			break;
		case 10:printf("Oct - 31 Days");
			break;
		case 11:printf("Nov - 30 Days");
			break;
		case 12:printf("Dec - 31 Days");
			break;
		default:printf("Incorrect input\n");
		goto a;
	}
}
