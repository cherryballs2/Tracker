OUTPUT_ARCH(riscv)
ENTRY(_start)

/* Adress for visonfive 2 */
BASE_ADDRESS = 0x40000000;

SECTIONS
{
  . = BASE_ADDRESS;

  .text : {
    *(.text)
  }

  .rodata : {
    *(.rodata)
  }

  .data : {
    *(.data)
  }

  .bss : {
    *(.bss)
  }
}