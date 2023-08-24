#include <stdio.h>
int main()
{
    int no, sum=0, fdigit, ldigit;
    printf("Enter any number to find sum of first and last digit: ");
    scanf("%d", &no);
    ldigit = no % 10;
    fdigit = no;
    while(no >= 10)
    {
        no = no / 10;
    }
    fdigit = no;
    sum = fdigit + ldigit; 
    printf("Sum of first and last digit = %d", sum);
    return 0;
}
