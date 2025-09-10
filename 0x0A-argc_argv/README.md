# 0x0A. C - argc, argv

## Description
This project introduces **command line arguments** in C.  
You’ll learn how to use `argc` (argument count) and `argv` (argument vector) to make programs that accept and process user input directly from the command line.

---

## Files

| File | Description |
|------|-------------|
| `main.h` | Header file containing prototypes. |
| `_putchar.c` | Custom `_putchar` function for output. |
| `0-whatsmyname.c` | Program that prints its own name, followed by a new line. |
| `1-args.c` | Program that prints the number of arguments passed into it. |
| `2-args.c` | Program that prints all arguments it receives, one per line. |
| `3-mul.c` | Program that multiplies two numbers. |
| `4-add.c` | Program that adds positive numbers; prints `Error` if a non-digit is passed. |
| `100-change.c` | Program that prints the minimum number of coins to make change for an amount of money. |

### Extra binaries (created after compilation / testing)
- `args`, `mul`, `add`, `change`, `mynewnameis`, `nargs` – compiled executables from the programs above.

---

## Compilation

All programs are compiled using:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 <file.c> -o <output>
