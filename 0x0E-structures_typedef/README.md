# 0x0E. C - Structures, typedef

## Description
This project introduces **structures** in C, how to use them to group related data, and the `typedef` keyword which helps create aliases for data types.  
You’ll also learn how to work with dynamically allocated structures and how to free them properly.

---

## Files

| File | Description |
|------|-------------|
| `dog.h` | Header file that defines the `struct dog` structure and function prototypes. |
| `1-init_dog.c` | Function that initializes a variable of type `struct dog`. |
| `2-print_dog.c` | Function that prints a `struct dog`. |
| `4-new_dog.c` | Function that creates a new dog (using `malloc` for a copy of `name` and `owner`). |
| `5-free_dog.c` | Function that frees memory allocated for a `struct dog`. |
| `0-main.c`, `1-main.c`, `2-main.c`, `3-main.c`, `4-main.c`, `5-main.c` | Test files for the corresponding functions. |
| `a`, `b`, `c`, `d`, `e`, `f` | Additional test cases / files. |

---

## Compilation

All programs and functions are compiled with:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o output
