# 0x0B. C - malloc, free

## Description
This project introduces **dynamic memory allocation** in C using `malloc` and `free`.  
You’ll learn how to allocate memory at runtime, manage it safely, and build functions that create, duplicate, and free dynamically allocated arrays and strings.

---

## Files

| File | Description |
|------|-------------|
| `main.h` | Header file containing all function prototypes. |
| `_putchar.c` | Custom `_putchar` function for output. |
| `0-create_array.c` | Function that creates an array of chars, initialized with a specific char. |
| `1-strdup.c` | Function that returns a pointer to a newly allocated duplicate of a string. |
| `2-str_concat.c` | Function that concatenates two strings into a newly allocated space in memory. |
| `3-alloc_grid.c` | Function that returns a pointer to a 2D array of integers. |
| `4-free_grid.c` | Function that frees a 2D grid previously created by `alloc_grid`. |
| `100-argstostr.c` | Function that concatenates all program arguments into a single string. |
| `100-main.c` | Test file for `100-argstostr.c`. |
| `args` | Compiled test binary (not part of the main tasks). |

---

## Compilation

All files are compiled using:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89
