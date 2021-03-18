#include <stdio.h>

int main(void) {
  int a, b;
  a = 0;
  b = ++a + a++ + ++a;
  printf("%d\n", b);
  return 0;
}
