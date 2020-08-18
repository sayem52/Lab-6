
#include<stdio.h>
int fib(int n)
{
   if (n <= 1)

   return fib(n-1) + fib(n-2);
}
 int main ()
{
  int n;
  printf("Enter Any Number : ");
  scanf("%d",&n);
  printf("Fibonacci Number : %d", fib(int n));
  getchar();

  return 0;
}
