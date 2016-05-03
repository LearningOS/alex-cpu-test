
int int_func() {
  return 123;
}

typedef int (*fp)();
int test_function_pointer(int a) {
  fp fp2 = (fp)int_func;
  return fp2();
}
