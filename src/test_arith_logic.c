int test_arith_logic_branch(int a, int b) {
  int c = 100;
  if (a <= b) {
    c += b;
  }
  else {
    c -= a;
  }
  for (int i = 0; i < 100; ++i) {
    c += i* c / b % a;
  }
  return a + b + c;
}
