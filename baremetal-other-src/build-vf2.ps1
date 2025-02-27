# This is a cross compile script for building the visionfive 2 version on windows. 
# Obviously this will assume you already have the "risc-v64-unknown-elf" toolchain installed,
# and in your path.

$CC = "riscv64-unknown-elf-gcc"
$AS = "riscv64-unknown-elf-as"
$LD = "riscv64-unknown-elf-ld"
$OBJCOPY = "riscv64-unknown-elf-objcopy"
$CFLAGS = "-march=rv64imac -mabi=ilp32 -ffunction-sections -fdata-sections -Os"
$LDFLAGS = "-T linker.ld -Wl,--gc-sections"
$SRC_DIR = "vf2"
$BUILD_DIR = "build"

CC 