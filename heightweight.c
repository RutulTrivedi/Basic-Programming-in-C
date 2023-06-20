#include<stdio.h>

void main()
{
	int i,a[5],b[5],h=0,w=0;
	
	for(i=0;i<=4;i++)
	{
		printf("Enter the height of %d person : ",i+1);
		scanf("%d",&a[i]);
		
		if(a[i]>=170)
		{
			h++;
		}
	}
	
	printf("\n");
	
	for(i=0;i<=4;i++)
	{
		printf("Enter the weight of %d person : ",i+1);
		scanf("%d",&b[i]);
		
		if(b[i]<=50)
		{
			w++;
		}
	}
	
	printf("\n");
	
	printf("The number of person having height greater than 170 - %d\n",h);
	printf("The number of person having weight less than 50 - %d",w);
}
