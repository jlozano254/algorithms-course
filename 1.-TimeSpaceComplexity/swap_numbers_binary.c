#include <stdio.h>

int main()
{
  int a, b; // Switch a -> b, b -> a, without aux
  scanf("%d %d", &a, &b);
  printf("Before:\n");
  printf("a = %d, b = %d\n", a, b);

  a ^= b;
  b ^= a;
  a ^= b;

  printf("After:\n");
  printf("a = %d, b = %d", a, b);
  return 0;
}