#include<stdio.h>
int main()
{
	int no[100],i,j,n,avg,count=0;
	printf("enter your value");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&no[i]);
		count=count+no[i];
	}
	for(i=0;i<n;i++)
	{
		printf("%d",&no[i]);
	}
	for(i=0;i<n;i++)
	{
	printf("%d",avg);	
	}
	return 0;
	
	
}
