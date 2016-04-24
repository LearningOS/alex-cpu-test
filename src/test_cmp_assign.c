int test_cmp_assign(int a, int b) {
  if (a == b) {
    return a > b;
  }
  else if (a > b) {
    return a < b;
  }
  else {
    return a == b;
  }
}
