int test_recur(int x) {
  if (x <= 0) return 0;
  return test_recur(x-1) + 1;
}
