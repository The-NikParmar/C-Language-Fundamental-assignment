#include <stdio.h>
int main() {
  int i, count = 0,no;
  printf("enter 10 values:- ");
  for (i = 1; i <= 10; i++) 
  {
    scanf("%d",&no);
    if (no % 2 == 0) {
      count++;
    }
  }
  printf("\nthe total even no:- %d", count);
  return 0;
}
