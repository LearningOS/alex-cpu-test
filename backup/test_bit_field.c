struct bf {
  unsigned a : 1;
  unsigned b : 2;
  unsigned c : 3;
  unsigned d : 4;
};

struct bf s = { 0, 1, 2, 3 };

unsigned get_bf_total() {
  return s.a + s.b + s.c + s.d;
}

#include "libs/stdio.h"
void test_bit_field() {
  cprintf("s.a + s.b + s.c + s.d = 0x%08x\n", get_bf_total());
}
