extern int test_switch(int a, int *ary);
int intv;
int intary[100];
void _start() {
  intv = test_switch(123, intary);
}
