#include "libs/stdio.h"
int a = 0xdeadbeef;
int main() {
  cprintf("Hello World! 0x%08x\n", a);
  return 0;
}
