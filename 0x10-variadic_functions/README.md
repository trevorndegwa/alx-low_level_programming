# 0x10. C - Variadic functions

## Description
This project introduces **variadic functions** in C.  
Variadic functions are functions that accept a variable number of arguments, such as `printf`.  
They are enabled in C using macros defined in `<stdarg.h>`:
- `va_list` – type for iterating arguments
- `va_start` – initializes the list
- `va_arg` – retrieves the next argument
- `va_end` – cleans up

Key concepts covered:
- Declaring and defining variadic functions
- Using macros to access variable arguments
- Designing flexible functions that can handle multiple inputs

---

## Project Structure

- **0-sum_them_all.c**  
  Function that returns the sum of all its parameters.

- **1-print_numbers.c**  
  Prints numbers, followed by a new line. Numbers are separated by a string separator.

- **2-print_strings.c**  
  Prints strings, followed by a new line. Handles `NULL` strings gracefully.

- **variadic_functions.h**  
  Header file containing prototypes for all variadic function tasks.

- **_putchar.c**  
  Helper function to write characters to standard output.

- **0-main.c, 1-main.c, 2-main.c**  
  Test files for the corresponding tasks.

- **a, b, c**  
  Extra test artifacts or scratch files.

---

## Compilation

To compile any of the files:

```bash
gcc -Wall -pedantic -Werror -Wextra <file.c> -o <output>
