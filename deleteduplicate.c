#include<stdio.h>

void main()
{
	int n,i,j,k;
	
	printf("Enter the length of array : ");
	scanf("%d",&n);
	
	int a[n],b[n];
	
	printf("Enter the elements of array : \n");
	for(i=0;i<n;i++)
	{			
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				for(k=j;k<n-1;k++)
				{
					a[k]=a[k+1];
				}
				n--;
			}
		}
		j--;
	}
	
	printf("\n");
	
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}
