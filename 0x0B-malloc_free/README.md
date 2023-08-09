# 0x0B. C - malloc, free
## Automatic allocation
Automatic allocation in C is the process of allocating memory for variables that are declared within a function. The memory is allocated when the function is entered and is deallocated when the function returns. This type of allocation is called automatic because it happens automatically by the compiler.

## Dynamic allocation
Dynamic allocation in C is the process of allocating memory for variables at runtime. This means that the amount of memory that is allocated is not known until the program is running. Dynamic allocation is typically used to allocate memory for large objects, such as arrays or linked lists. There are two main functions that are used for dynamic allocation in C: `malloc() and free().

### malloc() fuction
The malloc function allocates a specific number of bytes in memory and returns a pointer to the allocated memory. This memory will have read and write permissions.

- Prototype: `void *malloc(size_t size);`
- where `void *` means it is a pointer to the type of your choice
- and `size` is the number of bytes your need to allocate

### free() fuction
When you are using `malloc`, you have to handle the memory yourself. This means that:
You need to keep track of all the addresses of the allocated memory (in a variable of type pointer)
You have to deallocate every memory space you previously allocated yourself. If you do not do this, then your program can run out of memory. Your operating system could even kill your program while it is running.

The `free` function frees the memory space which have been allocated by a previous call to `malloc` (or `calloc`, or `realloc`).
- Prototype: `void free(void *ptr);`
- where `ptr` is the address of the memory space previously allocated by and returned by a call to `malloc`.

## Learning Objectives
### General
Going through this project has stregthened my understanding of the concepts and can now explain to anyone, without the help of Google:

- The difference between automatic and dynamic allocation.
- What malloc and free is and how to use them.
- Why and when malloc is best used.
- How valgrind is used to check for memory leak.

## Requirements
### General
- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`.
- All your files should end with a new line.
- A `README.md` file, at the root of the folder of the project is mandatory.
- Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/alx-tools/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/alx-tools/Betty/blob/master/betty-doc.pl).
- You are not allowed to use global variables.
- No more than 5 functions per file.
- The only C standard library functions allowed are `malloc` and `free`. Any use of functions like `printf`, `puts`, `calloc`, `realloc` etc… is forbidden.
- You are allowed to use [_putchar](https://github.com/alx-tools/_putchar.c/blob/master/_putchar.c).
- You don’t have to push `_putchar.c`, we will use our file. If you do it won’t be taken into account.
- In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples.
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `main.h`.
- Don’t forget to push your header file.