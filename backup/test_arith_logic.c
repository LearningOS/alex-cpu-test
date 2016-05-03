int test_arith_logic_branch_sc(int a, int b, int op) {
  unsigned ua = (unsigned)a;
  unsigned ub = (unsigned)b;
  switch(op) {
    case 0:
      return a + b;
    case 1:
      return a - b;
    case 2:
      return a * b;
    case 3:
      return a / b;
    case 4:
      return a % b;
    case 5:
      return a | b;
    case 6:
      return a & b;
    case 7:
      return ~a;
    case 8:
      return a ^ b;
    case 16 + 0:
      return ua + ub;
    case 16 + 1:
      return ua - ub;
    case 16 + 2:
      return ua * ub;
    case 16 + 3:
      return ua / ub;
    case 16 + 4:
      return ua % ub;
  }
}
#include "libs/stdio.h"

void test_arith_logic_branch() {
  for (int i = 0; i <= 8; ++i) {
    // -1 op 255
    cprintf("op %d, result\t%x\n", i, test_arith_logic_branch_sc(0xFF, 0xFFFFFFFF, i));
  }
  for (int i = 16; i <= 16+4; ++i) {
    cprintf("op %d, result\t%x\n", i, test_arith_logic_branch_sc(0xFF, 0xFFFFFFFF, i));
  }
}
