extern int test_switch(int a, int *ary);
int intv = 222;
int intary[100] = { 0 };
void _start() {
  intv = test_switch(123, intary);
}
