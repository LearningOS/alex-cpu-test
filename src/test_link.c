#include "libs/stdio.h"
unsigned int uint32_v = 0xdeadbeef;
int int32_v = -123;
char char_v = 'a';
unsigned char uint8_v = 0x81;
int *int32_ptr = &int32_v;
char ***arr[100];

struct s2 {
  int xx;
};

struct s1 {
  struct s2 s2val;
  int b;
};

int func_with_parameters(int a, int b, struct s1 c) {
  int x = 1;
  int y = 10;
  int z = x + y;
  return a + b + c.b + z;
}


static void write_port(int port, int c) {
  asm volatile (
    "bout %0, %1\n\t"
    :
    : "r" (port), "r" (c)
  );
}
void alex_putc1(int c) {
  write_port(1, c);
}
int varargs(int num, ...) {
  va_list valist;
  int sum = 0;
  int i, val;

  /* initialize valist for num number of arguments */
  va_start(valist, num);

  /* access all the arguments assigned to valist */
  for (i = 0; i < num; i++) {
    val = va_arg(valist, int);
    sum += val;
    alex_putc1('0' + val);
  }

  /* clean memory reserved for valist */
  va_end(valist); 
  return sum;
}

int main() {
  //int aa = '0' + varargs(2, 2, 3);
  //alex_putc1(aa);
  struct s1 a;
  a.b = 100;
  a.s2val.xx = 100000;
  cprintf("func_with_parameters: %d\n", func_with_parameters(1000, 10000, a));
  cprintf("Hello World! \n  uint32: 0x%08x\n  int32: %d\n  char: %c\n  uint8: 0x%02x\n",
    uint32_v, int32_v, char_v, uint8_v);
  return 0;
}

