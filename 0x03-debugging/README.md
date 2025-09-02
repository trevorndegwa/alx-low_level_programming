# 0x03. C - Debugging

## Description
This project is part of the ALX Low-Level Programming curriculum.  
It introduces the concept of debugging in C programs. Debugging is the process of finding and fixing errors (bugs) in software.  

The tasks in this project involved analyzing existing buggy code, identifying issues, and applying the correct fixes while following the **Betty coding style**.

---

## Project Files
- **main.h** → Header file with function prototypes.  
- **0-main.c** → Test file that checks if the function `positive_or_negative()` works correctly.  
- **1-main.c** → Fixed version of the provided infinite loop code.  
- **2-largest_number.c** → Contains the function `largest_number()` which returns the largest of three integers.  
- **3-print_remaining_days.c** → Contains the function `print_remaining_days()` which converts a date to the day of the year and accounts for leap years.  
- **README.md** → Project description and documentation.

---

## Tasks
1. **0. Multiple mains**  
   - Created a test file `0-main.c` to test the function `positive_or_negative()`.  
   - Verified that the function prints the correct output when given `0`.

2. **1. Like, comment, subscribe**  
   - Fixed an infinite loop in `1-main.c` by commenting out problematic code and explaining the reason.

3. **2. 0 > 972?**  
   - Debugged `2-largest_number.c` so that the function correctly returns the largest of three numbers.

4. **3. Leap year**  
   - Debugged `3-print_remaining_days.c` so that it properly accounts for leap years and prints the correct remaining days in the year.

---

## Compilation
All files are compiled using:
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c
