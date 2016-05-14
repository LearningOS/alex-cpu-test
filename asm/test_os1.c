
void out(int ch, int port) {
  asm volatile (
        "v9lbl 16\n"
        "v9ll 20\n"
        "v9bout");
}
void putc(int ch) {
  out(ch, 1);
}

int hello[] = { 'h', 'e', 'l', 'l', 'o', 0 };
void _start() {
  putc('h');
  asm volatile ("v9halt");
}
