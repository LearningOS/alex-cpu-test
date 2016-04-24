int test_array(int k) {
  int ar[100];
  for (int i = 0; i < k; ++i)
    ar[i] = k * i;
  return ar[k / 2];
}
