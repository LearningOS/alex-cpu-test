asm(".global _start");
asm("_start:");
asm("li $t0, 0");
asm("li $t1, 0");
asm("li $t2, 0");
asm("li $t3, 0");
asm("li $t4, 0");
asm("li $s0, 0");
asm("li $s1, 0");
asm("li $s2, 0");
asm("li $s3, 0");
asm("li $s4, 0");
asm("li $fp, 0");

asm("li $t1, 0x0  # t1 = 128M - 4M");
asm("lih $t1, 0x07c0  # t1 = 128M - 4M");
asm("addi $sp, $t1, 0");

// call main
asm("lih $t1, %hi(main)");
asm("addiu  $t1, $t1, %lo(main)");
asm("jr  $t1");

// print hello
asm("li $t0, 0");
asm("li $t1, 72");
asm("bout $t0, $t1");
asm("li $t1, 101");
asm("bout $t0, $t1");
asm("li $t1, 108");
asm("bout $t0, $t1");
asm("li $t1, 108");
asm("bout $t0, $t1");
asm("li $t1, 111");
asm("bout $t0, $t1");
asm("li $t1, 10");
asm("bout $t0, $t1");


asm("halt");
