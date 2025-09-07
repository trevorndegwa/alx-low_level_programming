# 0x06. C - More pointers, arrays and strings

## Description
This project continues the exploration of **pointers, arrays, and strings** in C.  
It introduces more advanced manipulations like string concatenation with limits, string comparison, array reversal, string encoding (1337 and ROT13), and handling large integer addition with buffers.

---

## Files

| File | Description |
|------|-------------|
| `main.h` | Header file containing all function prototypes. |
| `_putchar.c` | Custom `_putchar` function used for output. |
| `0-strcat.c` | Function that concatenates two strings. |
| `1-strncat.c` | Function that concatenates two strings using at most `n` bytes. |
| `2-strncpy.c` | Function that copies a string. |
| `3-strcmp.c` | Function that compares two strings. |
| `4-rev_array.c` | Function that reverses the content of an array of integers. |
| `5-string_toupper.c` | Function that changes all lowercase letters of a string to uppercase. |
| `6-cap_string.c` | Function that capitalizes all words of a string. |
| `7-leet.c` | Function that encodes a string into **1337**. |
| `100-rot13.c` | Function that encodes a string using **ROT13**. |
| `101-print_number.c` | Function that prints an integer using `_putchar`. |
| `101-main.c` | Test file for `101-print_number.c`. |
| `102-magic.c` | Program with a pointer trick to print `a[2] = 98`. |
| `103-infinite_add.c` | Function that adds two large numbers represented as strings. |
| `104-print_buffer.c` | Function that prints a buffer in hexadecimal + ASCII format. |

---

## Compilation

All files are compiled with:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 
