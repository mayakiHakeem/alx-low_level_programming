# 0x0A. C - argc, argv

## Definition
In C programming, argc and argv[] are used to handle command-line arguments passed to a program when it is run from the terminal or command prompt.

1. `argc` (argument count) is an integer that represents the number of command-line arguments provided, including the name of the program itself.

2. `argv[]` (argument vector) is an array of strings where each element holds one command-line argument, with argv[0] being the program name itself, and subsequent elements holding the arguments passed to the program.

## Learning Objectives
After going through this project, I am now able to explain to anyone (including 5 year kids), without the help of Google and/or ChatGPT:

### General Knowledge Gained from the Project
- How to use arguments passed to your program
- What are two prototypes of `main` that you know of, and in which case do you use one or the other
- How to use `__attribute__((unused))` or `(void)` to compile functions with unused variables or parameters

## Project Requirement
- Allowed editors: `vi`, `vim`, and `emacs`
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project is mandatory
- Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/alx-tools/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/alx-tools/Betty/blob/master/betty-doc.pl}
- You are not allowed to use global variables
- No more than 5 functions per file
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `main.h`
Don’t forget to push your header file
You are allowed to use the standard library