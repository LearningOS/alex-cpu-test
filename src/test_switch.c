int test_switch(int a, int *ary) {
  switch(a) {
    case 1:
      return ary[0];
    case 2:
      ary[1] += 1; break;
    case 3:
      ary[2] += 1;
    case 4:
      return ary[3];
    default:
      return 0;
  }
  return -1;
}
