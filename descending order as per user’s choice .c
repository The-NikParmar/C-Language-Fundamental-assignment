#include<stdio.h>
int main()
{
	int i,n,no[100],j,temp;
	printf("how many elements you want to enter : ");
	scanf("%d",&n);
	printf("\nelement %d no enter : \n",n);
	
	for(i=0 ;i<n ;i++)
	{
		scanf("%d",&no[i]);
	}
	printf("\n");
	printf("befor dessending order :");
	for(i=0 ;i<n ;i++)
	{
		printf("%d\t",no[i]);
	}

	for(i=0;i<n;i++)
	{
		for(j=j+1;j<n;j++)
		{
			if(no[i]<no[j])
			{
				temp=no[i];
				no[i]=no[j];
				no[j]=temp;
			}
		}	
	}
	printf("\nafter dessending order :");
	for(i=0 ;i<n ;i++)
	{
		printf("%d\t",no[i]);
	}
	
	
	return 0;
}
