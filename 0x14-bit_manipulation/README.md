# 0x14. C - Bit manipulation

## Description
This project focuses on **bit manipulation** in C — the process of performing operations directly on the binary representations of numbers.

You’ll learn how to use **bitwise operators** (`&`, `|`, `^`, `~`, `<<`, `>>`) to efficiently manage flags, toggle bits, and perform conversions between binary and decimal forms.

Key concepts covered:
- Converting binary to unsigned integers
- Printing binary representations of numbers
- Using bitwise operators to manipulate specific bits
- Setting, clearing, and toggling bits
- Counting the number of bits that differ between two numbers

---

## Project Structure

- **0-binary_to_uint.c**  
  Converts a binary number (string) to an unsigned integer.

- **1-print_binary.c**  
  Prints the binary representation of a number without using arrays, malloc, or `%` or `/`.

- **3-set_bit.c**  
  Sets the value of a bit to `1` at a given index.

- **5-flip_bits.c**  
  Returns the number of bits you would need to flip to get from one number to another.

- **main.h**  
  Header file containing all function prototypes.

- **_putchar.c**  
  Helper function for printing characters.

- **0-main.c**, **1-main.c**, **3-main.c**, **5-main.c**, **a**, **b**, **d**, **f**  
  Test files and examples used to verify functionality.

---

## Compilation

Compile with:

```bash
gcc -Wall -pedantic -Werror -Wextra <file.c> -o <output>
