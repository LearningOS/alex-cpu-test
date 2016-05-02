extern int test_switch(int a, int *ary);
int intv = 222;
int intary[100] = { 0 };

void putc(int c) {
  int port = 1;
  asm volatile (
    "bout %0, %1\n\t"
    :
    : "r" (port), "r" (c)
  );
}

int main() {
  putc('H');putc('e');putc('l');putc('l');putc('o');putc('!');
  //intv = test_switch(123, intary);
  return 0;
}
