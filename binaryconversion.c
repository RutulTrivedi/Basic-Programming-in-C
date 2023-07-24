#include<stdio.h>

void main()
{
	int j,i=0,n,a[32];
	
	printf("Enter the number : ");
	scanf("%d",&n);
	
	while(n>0)
	{
		a[i]=n%2;
		n=n/2;
		i++;
	}
	
	for(j=i-1;j>=0;j--)
	{
		printf("%d",a[j]);
	}
}


