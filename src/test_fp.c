
int int_func() {
  return 123;
}

typedef int (*fp)();
int test_function_pointer(int a) {
  fp fp1 = (fp)1234;
  fp1 = (fp)((int)fp1 + a);
  fp fp2 = (fp)int_func;
  return fp1() + fp2();
}
