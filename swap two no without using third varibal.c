#include<stdio.h>
int main()
{
	int n1,n2;
	printf("enter your Number1:- ");
	scanf("%d",&n1);
	printf("enter your Number2:- ");
	scanf("%d",&n2);
	
	printf("before swap n1=%d n2=%d",n1,n2); 
	n1=n1+n2;
	n2=n1-n2;
	n1=n1-n2;
	printf("\nafter swap n1=%d n2=%d",n1,n2);
	
}
