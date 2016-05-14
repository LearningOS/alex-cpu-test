easm(".text");
asm(".global _start");
asm("_start:");
asm("v9li 100");
asm("v9pusha");
asm("v9popb");
asm("v9li 1");
asm("v9bout");
asm("v9halt");
