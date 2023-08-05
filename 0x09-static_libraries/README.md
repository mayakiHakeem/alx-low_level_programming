# 0x09-Static Libraries

## Definition
A C static library is a collection of pre-compiled functions and data, organized into a single archive file. It provides a way to package and distribute reusable code that can be linked with other C programs. Static libraries are 'static' because the code they contain becomes part of the final executable at the compilation stage, making it self-contained and independent of the library at runtime.

## General Knowledge Gained from the Chapter
- What static library really is and how it works.
- How to create and use static libraries.
- Basic usage of `ar`, `ranlib`, and `nm`.

## Requirements for Tackling the Coding Challenges
### C
- Allowed editors: `vi`, `vim`, and `emacs`.
- All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project is mandatory
- Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/alx-tools/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/alx-tools/Betty/blob/master/betty-doc.pl).
- You are not allowed to use global variables
- No more than 5 functions per file
- You are not allowed to use the standard library. Any use of functions like `printf`, `puts`, etc… is forbidden
- You are allowed to use [_putchar](https://github.com/alx-tools/_putchar.c/blob/master/_putchar.c)
- You don’t have to push `_putchar.c`, we will use our file. If you do it won’t be taken into account
In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `main.h`
- Don’t forget to push your header file

### Bash
- Allowed editors: `vi`, `vim`, and `emacs`
- All your scripts will be tested on Ubuntu 20.04 LTS
- All your files should end with a new line ([why?](http://unix.stackexchange.com/questions/18743/whats-the-point-in-adding-a-new-line-to-the-end-of-a-file/18789))
- The first line of all your files should be exactly `#!/bin/bash`
- A README.md file, at the root of the folder of the project, describing what each script is doing
All your files must be executable