#include<stdio.h>

long fib(int n)
{
  long a = 0, b = 1, c, i;
  if( n == 0)
    return a;
  for (i = 2; i <= n; i++)
  {
     c = a + b;
     a = b;
     b = c;
  }
  return b;
}

int main ()
{
  int n;
  scanf("%d", &n);
  printf("%ld\n", fib(n));
  return 0;
}