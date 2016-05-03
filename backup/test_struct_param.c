
struct Shit {
  int _;
  int __;
  int ___;
  int a;
  int b;
  int c;
};
struct Shit smallShit;

int test_param_struct(struct Shit shit) {
  return shit.a;
}
void test_param_struct1() {
  test_param_struct(smallShit);
}
