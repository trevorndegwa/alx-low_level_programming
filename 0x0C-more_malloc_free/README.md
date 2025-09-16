# 0x0C. C - More malloc, free

## Description
This project builds on the concepts of **dynamic memory allocation** introduced earlier.  
You’ll learn how to use `malloc`, `calloc`, and `realloc` to handle memory more flexibly, as well as how to exit a program gracefully when memory allocation fails.

---

## Files

| File | Description |
|------|-------------|
| `main.h` | Header file containing all function prototypes. |
| `0-malloc_checked.c` | Function that allocates memory using `malloc`. If it fails, the program terminates with status value `98`. |
| `1-string_nconcat.c` | Function that concatenates two strings, but only uses the first `n` bytes of the second string. |
| `2-calloc.c` | Function that allocates memory for an array using `calloc`, setting all memory bytes to zero. |
| `3-array_range.c` | Function that creates an array of integers containing all values from `min` to `max` inclusive. |

---

## Compilation

All files are compiled with:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89
