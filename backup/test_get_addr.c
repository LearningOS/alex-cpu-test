#include "libs/stdio.h"
void test_get_addr() {
  int v = 123;
  cprintf("&v = 0x%08x\n", &v);
}
