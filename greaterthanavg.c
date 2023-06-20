#include<stdio.h>

void main()
{
	int sum=0,i,n,avgn=0;
	float avg;
	
	printf("Enter the length of array : ");
	scanf("%d",&n);
	
	int a[i];
	
	printf("Enter elements : ");
	
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	
	avg=(float)sum/n;
	
	for(i=0;i<=n-1;i++)
	{	
		if(a[i]>=avg)
		{
			avgn++;
		}
	}
	
	printf("%d numbers are greater than average.",avgn);
}
