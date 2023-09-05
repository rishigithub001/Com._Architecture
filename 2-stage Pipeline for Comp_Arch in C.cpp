#include <stdio.h>
int add(int a, int b) {
  int sum;
  sum = a;
  sum += b;
  return sum;
}
int main() 
{
  int a, b;
  printf("Enter the first data: ");
  scanf("%d", &a);
  printf("Enter the second data: ");
  scanf("%d", &b);
  int sum = add(a, b);
  printf("The sum is %d\n", sum);
	return 0;
}

