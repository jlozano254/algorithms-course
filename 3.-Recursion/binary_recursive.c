#include<stdio.h>

int bin(int n)
{
  if (n) {
    bin(n >> 1);
    printf("%d", n & 1);
  }
}

int main ()
{
  int n;
  scanf("%d", &n);
  bin(n);
  printf("\n");
  return 0;
}