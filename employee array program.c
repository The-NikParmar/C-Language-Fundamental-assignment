#include<stdio.h>
#include<stdio.h>
struct employee {
    char empName[50];
    int empno;
    int empage;
    char empaddress;
}e[5];

int main()
 {
    int i;
    printf("Enter information of Employee:\n");

    // storing information
    for (i = 0; i < 5; ++i) 
	{
        e[i].empno = i + 1;
        printf("\nFor employee number%d,\n", e[i].empno);
        
        printf("Enter employee name: ");
        scanf("%s", e[i].empName);
        
		printf("Enter employee Age: ");
        scanf("%d", e[i].empage);
        
		printf("Enter employee Address: ");
        scanf("%s", &e[i].empaddress);
    }
    printf("Displaying Information:\n\n");

    // displaying information
    for (i = 0; i < 5; ++i) 
	{
        printf("\nEmpno number: %d\n", i + 1);
        
        printf("Employee name: ");
        printf(e[i].empName);
        
        printf("age: %d", e[i].empage);
        
        printf("Employee Address: ");
        printf(e[i].empaddress);
        
        printf("\n");
    }
    return 0;
}

