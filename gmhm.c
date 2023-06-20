#include<stdio.h>
#include<math.h>

void main()
{
	int n,i,gmproduct=1,sum=0;
	float den=0,gm,hm,hmnum;
	
	printf("Enter the length of array : ");
	scanf("%d",&n);
	
	printf("Enter the elements : ");
	
	int a[n];
	
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
		gmproduct=gmproduct*a[i];
		hmnum=1/(float)a[i];
		den=den+hmnum;		
	}
	
	gm=pow(gmproduct,1/(float)n);
	hm=n/den;
	
	printf("Sum will be %d\n",sum);
	printf("Geometric mean : %.2f\n",gm);
	printf("Harmoric mean : %.2f",hm);
}
