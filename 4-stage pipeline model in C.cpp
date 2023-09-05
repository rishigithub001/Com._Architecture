#include <stdio.h>
int add(int a, int b, int c, int d) 
{
  int sum;
  sum = a+b+c;
  sum += d;
  return sum;
}

int main() 
{
  int a, b, c, d;
  printf("Enter the first data: ");
  scanf("%d", &a);

  printf("Enter the second data: ");
  scanf("%d", &b);
  
  printf("Enter the third data: ");
  scanf("%d", &c);
  
  printf("Enter the fourth data: ");
  scanf("%d", &d);
  
  int sum = add(a, b, c, d);
  printf("The sum is %d\n", sum);

  return 0;
}

