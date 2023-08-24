#include<stdio.h>
struct  employee
{
	char name[50] ;
	int empno ;
	int age ;
	char address[30] ;
};

int  main( )
{
	struct employee emp ;

	printf("\n Enter employee details !\n") ;
	printf("\n Name : ") ;
	gets(emp.name ) ;
	printf("\n EmpNo : ") ;
	scanf("%d",&emp.empno ) ;
	printf("\n Age : ") ;
	scanf("%d",&emp.age ) ;
	printf("\n Address : ") ;
	scanf("%s",&emp.address) ;
	
	
	printf("\n Entered employee detail are !" ) ;
	printf("\n Name: %s" ,emp.name ) ;
	printf("\n Empno: %d" ,emp.empno ) ;
	printf("\n Empage: %d" ,emp.age ) ;
	printf("\n Address: %s\n",emp.address) ;
	return 0 ;
}

