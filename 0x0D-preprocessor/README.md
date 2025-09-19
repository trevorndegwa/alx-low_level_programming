# 0x0D. C - Preprocessor

## Description
This project introduces the **C preprocessor** and its role in the compilation process.  
You’ll learn about macros, header guards, and how the preprocessor handles constants, functions, and file inclusion before the compiler runs.

---

## Files

| File | Description |
|------|-------------|
| `0-object_like_macro.h` | Header file that defines a macro named `SIZE` with the value `1024`. |
| `1-pi.h` | Header file that defines a macro named `PI` with the value `3.14159265359`. |
| `2-main.c` | Program that prints the name of the file it was compiled from. |
| `3-function_like_macro.h` | Header file that defines a function-like macro `ABS(x)` that computes the absolute value of `x`. |
| `4-sum.h` | Header file that defines a function-like macro `SUM(x, y)` that computes the sum of `x` and `y`. |
| `_putchar.c` | Helper function for output (used in some projects). |
| `0-main.c`, `1-main.c`, `2-main.c`, `3-main.c`, `4-main.c` | Test files for the different macros and programs. |

---

## Compilation

All files are compiled using:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o output
