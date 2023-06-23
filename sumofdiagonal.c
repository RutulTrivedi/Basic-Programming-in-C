#include<stdio.h>

void main()
{
	int i,j,sum=0,n;
	
	printf("Enter the number of rows or columns of the square matrix : ");
	scanf("%d",&n);
	
	int a[n][n];
	
	printf("Enter the elements of the matrix : ");	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("The matrix will be : \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
	printf("The diagonal elements will be ");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			{
				printf("%d ",a[i][j]);
				sum=sum+a[i][j];
			}
		}
	}
	printf("\nThe sum will be %d.",sum);
}
