#include<stdio.h>
#include<math.h>

long fib(int n) {
  double phi = (1 + sqrt(5)) / 2;
  return round(pow(phi, n) / sqrt(5));
}

int main ()
{
  int n;
  scanf("%d", &n);
  printf("%ld\n", fib(n));
  return 0;
}