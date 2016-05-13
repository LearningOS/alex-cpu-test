#include "libs/stdio.h"
unsigned int uint32_v = 0xdeadbeef;
int int32_v = -123;
char char_v = 'a';
unsigned char uint8_v = 0x81;
int *int32_ptr = &int32_v;

int func_with_parameters(int a, int b, int c) {
  int x = 123;
  int y = 321;
  int z = x + y;
  return a + b + c + z;
}

int main() {
  cprintf("func_with_parameters: %d\n", func_with_parameters(1, 2, 3));
  cprintf("Hello World! \n  uint32: 0x%08x\n  int32: %d\n  char: %c\n  uint8: 0x%02x\n",
    uint32_v, int32_v, char_v, uint8_v);
  return 0;
}
