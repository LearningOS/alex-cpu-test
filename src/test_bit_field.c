struct bf {
  int a : 1;
  int b : 2;
  int c : 3;
  int d : 4;
};

struct bf s;

int get_bf_total() {
  return s.a + s.b + s.c + s.d;
}
