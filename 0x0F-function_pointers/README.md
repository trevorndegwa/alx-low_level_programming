# 0x0F. C - Function pointers

## Description
This project introduces **function pointers** in C, which allow functions to be treated like variables. By using pointers to functions, we can pass functions as arguments, return them from other functions, and implement flexible designs such as callbacks.

Key concepts covered:
- Declaring and using function pointers
- Passing function pointers as arguments to other functions
- Returning function pointers
- Using function pointers to choose operations at runtime
- Implementing simple calculator programs with function pointers

---

## Project Structure

- **0-print_name.c**  
  Function that takes a name and a function pointer, and uses it to print the name.

- **1-array_iterator.c**  
  Executes a given function on each element of an array.

- **2-int_index.c**  
  Searches for an integer in an array using a comparison function pointer.

- **3-op_functions.c**  
  Contains basic arithmetic operation functions: addition, subtraction, multiplication, division, and modulo.

- **3-get_op_func.c**  
  Selects the correct operation function based on the operator string.

- **3-calc.h**  
  Header file containing function prototypes and struct definitions used in the calculator program.

- **3-main.c**  
  Main program that performs arithmetic operations using function pointers.

- **function_pointers.h**  
  Header file containing prototypes for the function pointer tasks.

- **_putchar.c**  
  Helper function to write characters to standard output.

- **calc**  
  The executable file created for the calculator.

---

## Compilation

To compile any of the files, use:

```bash
gcc -Wall -pedantic -Werror -Wextra <file.c> -o <output>
