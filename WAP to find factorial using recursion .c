#include<stdio.h>
long int multino(int n);
int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    printf("Factorial of %d = %ld", n, multino(n));
    return 0;
}

long int multino(int n) {
    if (n>=1)
        return n*multino(n-1);
    else;
        return 1;
}

