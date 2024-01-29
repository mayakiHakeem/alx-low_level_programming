## Arguments to main
In C and C++ programming languages, the main function is the entry point of a program. The main function can be defined in two ways:
- With no parameters: `int main()`: This form is allowed by the C standard, but it doesn't allow access to command-line arguments.
- With the parameters `int argc`, `char *argv[]`: This form is used to access command-line arguments passed to the program.

## argc (Argument Count)
argc is an integer that represents the number of command-line arguments passed to the program when it is executed. The name "argc" stands for "argument count." It includes the name of the program as the first argument. So, if no command-line arguments are provided, argc is 1.

## argv (Argument Vector)
argv is an array of strings (array of pointers to characters) where each element points to a string that represents a command-line argument. The name "argv" stands for "argument vector." The first element, argv[0], contains the name of the program being executed. The last element, argv[argc-1], is a pointer to the last command-line argument string. The last element argv[argc] is always NULL, indicating the end of the argument vector.

### Assignment Requirements
### General
- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using [betty-style.pl](https://github.com/alx-tools/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/alx-tools/Betty/blob/master/betty-doc.pl)
- You are not allowed to use global variables
- No more than 5 functions per file
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `main.h`
- Don’t forget to push your header file
- You are allowed to use the standard library
