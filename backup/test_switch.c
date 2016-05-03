int test_switch(int a, int b) {
  switch(a) {
    case 1:
      return b + 1;
    case 2:
      break;
    case 3:
      return a - 1000;
    case 4:
      return a - 10;
    case 5:
      return a - 31;
    case 6:
      return a - 3;
    default:
      return -1;
  }
  return 0;
}
