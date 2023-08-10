# 0x0C. C - More malloc, free
In the last chapter, `0x0B. C - malloc, free` we discussed dynamic memory allocation and two most common functions used in dynamic memory allocation- `malloc()` and `free()`. In this project we continued from the last project and tackle the challenges to solidify my understanding of the concept. We also look at other functions like `calloc()`, `realloc` and `exit (3)`.

### calloc() function

**Purpose:** `calloc` stands for contiguous allocation and is used to allocate memory for multiple elements of a given size, initializing all the allocated bytes to zero.

**Function Signature:** `void *calloc(size_t num_elements, size_t element_size);`

**Arguments:**
- `num_elements`: The number of elements you want to allocate memory for.
- `element_size`: The size of each element in bytes.

**Memory Initialization:** All bytes of the allocated memory are set to zero.

### realloc() function
**Purpose:** `realloc()` is a function used to resize dynamically allocated memory.
Function Signature: `void *realloc(void *ptr, size_t size);`

**Arguments:**
- `ptr`: A pointer to the previously allocated memory block. This can be a pointer returned by `malloc()`, `calloc()`, or a previous call to `realloc()`.
- size: The new size in bytes that you want to resize the memory block to. This size can be larger or smaller than the original size.

**Return Value:**
- If the reallocation is successful, the function returns a pointer to the newly resized memory block. This might be the same as the original ptr or a new location in memory.
- If the reallocation fails (e.g., due to lack of available memory), the function returns `NULL`.

Behavior:
If the requested size is larger than the original size, the additional bytes are uninitialized.
If the requested size is smaller than the original size, the excess bytes are discarded.
If ptr is NULL, `realloc()` behaves like `malloc()`.

### exit() function
The `exit()` function is used to end a program in C. It takes an integer status as an argument to indicate whether the program completed successfully or encountered an error. This function is important for memory allocation as it allows you to clean up allocated memory and resources before the program ends, preventing memory leaks. Proper use of `exit()` ensures controlled program termination and resource management.

## Learning Objective
### General
After this project, I am now able to explain to anyone, without the help of Google the following:
- How to use the `exit` function.
- What the `calloc` and `realloc` functions from the standard library are and how they are used.

## Requirements
### General
Listed below are the requirements and restrictions for tackling the exercises.

- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`.
- All your files should end with a new line.
- A `README.md` file, at the root of the folder of the project is mandatory
- Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/alx-tools/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/alx-tools/Betty/blob/master/betty-doc.pl).
- You are not allowed to use global variables.
- No more than 5 functions per file.
- The only C standard library functions allowed are `malloc`, `free` and `exit`. Any use of functions like `printf`, `puts`, `calloc`, `realloc` etc… is forbidden.
- You are allowed to use [_putchar](https://github.com/alx-tools/_putchar.c/blob/master/_putchar.c).
- You don’t have to push `_putchar.c`, we will use our file. If you do it won’t be taken into account.
- In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples.
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `main.h`.
- Don’t forget to push your header file.