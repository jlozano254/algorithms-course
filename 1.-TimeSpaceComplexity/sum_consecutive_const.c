#include<stdio.h>

int main ()
{
  int n, sum;
  scanf("%d", &n);
  sum = (n * (n + 1)) << 1; // (n*(n+1)) / 2 Gauss
  printf("%d", sum);
  return 0;
}