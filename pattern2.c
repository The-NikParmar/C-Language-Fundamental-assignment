//A
//B C
//D E F
//G H I J
//K L M N O
#include<stdio.h>
int main()
{
	int i,j;
	char  ch='A';
	for(i=0;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c ",ch++);
		}
		printf("\n");
	}
	
}
