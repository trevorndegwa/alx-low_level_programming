# 0x12. C - Singly linked lists

## Description
This project introduces **singly linked lists** in C — a fundamental data structure where each element (node) contains data and a pointer to the next node in the sequence.

Unlike arrays, linked lists are dynamic and allow efficient insertion and deletion without the need to shift elements.

Key concepts covered:
- Defining and using `struct` types
- Declaring pointers to structures
- Dynamically allocating memory for new nodes
- Traversing and manipulating linked lists
- Freeing linked list memory properly

---

## Project Structure

- **lists.h**  
  Header file containing structure definitions and function prototypes for all list operations.

- **0-print_list.c**  
  Prints all elements of a `list_t` list.  
  Returns the number of nodes.

- **1-list_len.c**  
  Returns the number of elements in a linked list.

- **2-add_node.c**  
  Adds a new node at the beginning of a linked list.

- **3-add_node_end.c**  
  Adds a new node at the end of a linked list.

- **4-free_list.c**  
  Frees all nodes of a linked list.

- **_putchar.c**  
  Helper function for output.

- **0-main.c, 1-main.c, a, b**  
  Test files for verifying functionality.

---

## Compilation

To compile all source files:

```bash
gcc -Wall -pedantic -Werror -Wextra *.c
