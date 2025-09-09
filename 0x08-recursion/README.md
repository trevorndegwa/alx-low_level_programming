# 0x08. C - Recursion

## Description
This project introduces the concept of **recursion** in C — functions that call themselves to solve smaller instances of a problem until reaching a base case.  
It revisits classic problems like factorials, string operations, power and square root calculations, primality testing, palindrome detection, and string comparison with wildcards.

---

## Files

| File | Description |
|------|-------------|
| `main.h` | Header file containing all function prototypes. |
| `_putchar.c` | Custom `_putchar` function for output. |
| `0-puts_recursion.c` | Function that prints a string, followed by a new line (`_puts_recursion`). |
| `1-print_rev_recursion.c` | Function that prints a string in reverse (`_print_rev_recursion`). |
| `2-strlen_recursion.c` | Function that returns the length of a string (`_strlen_recursion`). |
| `3-factorial.c` | Function that returns the factorial of a number (`factorial`). |
| `4-pow_recursion.c` | Function that returns the value of `x` raised to the power of `y` (`_pow_recursion`). |
| `5-sqrt_recursion.c` | Function that returns the natural square root of a number (`_sqrt_recursion`). |
| `6-is_prime_number.c` | Function that returns 1 if the input integer is a prime number, otherwise 0 (`is_prime_number`). |
| `100-is_palindrome.c` | Function that checks if a string is a palindrome (`is_palindrome`). |
| `101-wildcmp.c` | Function that compares two strings, where the second string can contain the special character `*` (`wildcmp`). |

---

## Compilation

All files are compiled using:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89
