#include<stdio.h>

void main()
{
	int r,c,i,j;
	printf("Enter the number of rows of matrix : ");
	scanf("%d",&r);
	printf("Enter the number of columns of matrix : ");
	scanf("%d",&c);	
	
	int a[r][c],b[r][c];
	
	printf("Enter the elements of the first array : ");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\n");
	printf("Enter the elements of the second array : ");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	
	printf("New matrix will be : \n");
		
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",a[i][j]+b[i][j]);
		}
		printf("\n");
	}
}
