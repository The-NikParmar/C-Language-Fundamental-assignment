#include <stdio.h>
int main() {
  int i, count = 0,no;
  printf("enter your 10 values:- ");
  for (i = 1; i <= 10; i++) {
    scanf("\n%d",&no);
    if (no % 2 != 0) {
      count++;
    }
  }
  printf("\nthe total odd no:- %d", count);
  return 0;
}
