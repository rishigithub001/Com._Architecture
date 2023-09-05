#include <stdio.h>
int add(int a, int b, int c) 
{
  int sum;
  sum = a+b;
  sum += c;
  return sum;
}

int main() 
{
  int a, b, c;
  printf("Enter the first data: ");
  scanf("%d", &a);

  printf("Enter the second data: ");
  scanf("%d", &b);
  
  printf("Enter the third data: ");
  scanf("%d", &c);
  int sum = add(a, b, c);
  printf("The sum is %d\n", sum);

  return 0;


