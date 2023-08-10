#include<stdio.h>

void main()
{
	int i,j,n,sp,no=1;
	
	printf("Enter the number of rows : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		for(sp=1;sp<=n-i;sp++)
		{
			printf("  ");
		}
		
		for(j=0;j<=i;j++)
		{
			if(i==0||j==0)
			{
				no=1;	
			}
			
			else
			{
				no=no*(i-j+1)/j;
			}
			
			printf("%4d",no);
			
		}
		printf("\n");	
	}
	return;
}
