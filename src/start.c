asm(".global _start");
asm("_start:");
asm("li  $t0, 0x0000");
asm("lih $t0, 0x07c0  # t0 = 128M - 4M");
asm("addi $sp, $t0, 0");
asm("li  $t0, %lo(main)");
asm("lih $t0, %hi(main)");
asm("jr  $t0");
