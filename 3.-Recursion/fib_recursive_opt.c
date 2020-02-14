#include<stdio.h>

long fibos[10000001];

long fib(int n)
{
  if (n <= 1) return n;
  if (!fibos[n]) fibos[n] = fib(n - 1) + fib(n - 2);
  return fibos[n];
}

int main ()
{
  int n;
  scanf("%d", &n);
  printf("%ld\n", fib(n));
  return 0;
}