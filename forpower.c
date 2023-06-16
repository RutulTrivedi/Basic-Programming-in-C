#include<stdio.h>

void main()
{
	int x,y,ans=1,i;
	
	printf("Enter the value of x : ");
	scanf("%d",&x);
	
	printf("Enter the value of y : ");
	scanf("%d",&y);
	
	for(i=1;i<=y;i++)
	{
		ans=ans*x;
	}
	
	printf("Answer will be %d",ans);
	return;
}
