#include <stdio.h>

union floatingPoint{
  float deci;
  unsigned char parte [4];
} num;

int main(void) {
  scanf("%f", &num.deci);
  printf("%x\n", num.parte[3]);
  printf("%x\n", num.parte[2]);
  printf("%x\n", num.parte[1]);
  printf("%x\n", num.parte[0]);
}
