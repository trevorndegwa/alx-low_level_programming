# C - Hello, World

This project is an introduction to the C programming language. It covers the basic compilation steps, working with the GCC compiler, and writing simple programs that use standard input/output functions.  

---

## Files

| File | Description |
|------|-------------|
| `0-preprocessor` | Script that runs a C file through the preprocessor and saves the result into another file. |
| `1-compiler` | Script that compiles a C file without linking. |
| `2-assembler` | Script that generates the assembly code of a C file and saves it in an output file. |
| `3-name` | Script that compiles a C file and creates an executable named `cisfun`. |
| `4-puts.c` | C program that prints a sentence using `puts()`, followed by a new line. Returns `0`. |
| `5-printf.c` | C program that prints a sentence using `printf()`, followed by a new line. Returns `0`. |
| `6-size.c` | C program that prints the size of various types on the computer it is compiled and run on. |
| `100-intel` | Script that generates the assembly code (Intel syntax) of a C file and saves it in an output file. |
| `101-quote.c` | C program that prints exactly `"and that piece of art is useful" - Dora Korpar, 2015-10-19`, followed by a new line, to the standard error. Returns `1`. |

---

## Compilation

All C files are compiled with the following command:

```bash
gcc -Wall -Werror -Wextra -pedantic <filename.c> -o <output>
