#include<stdio.h>
int main()
{
	int i,n,no[100],j,temp;
	printf("how many Element you want to enter : ");
	scanf("%d",&n);
	printf("Enter %d no:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&no[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",no[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(no[i]>no[j])
			{
				temp=no[i];
				no[i]=no[j];
				no[j]=temp;
			}
		}
	}
	printf("\nAscending order\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",no[i]);
	}

	return 0;
}
