#include <stdio.h>
int main() {
  int i, n;
  int n1 = 0, n2 = 1;
  int n3 = n1 + n2;
  printf("Enter the number of terms: ");
  scanf("%d", &n);
  printf("Fibonacci Series: %d, %d, %d, ", n1, n2,n3);
  for (i = 3; i <= n; i++) {
    
    n1 = n2;
    n2 = n3;
    n3= n1 + n2;
    printf("%d, ", n3);
  }

  return 0;
}

