
char string[] = { 'a', 'r', 'r', 'a', 'y', 0 };

void test_array() {
  for (int i = 0; i < sizeof(string); ++i)
    cprintf("[%d]= %c\n", i, string[i]);
}
