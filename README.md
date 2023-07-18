# Libft

This project is a part of the 1337 cursus and aims to recreate various standard C library functions, as well as additional utility functions, in order to build a custom library called "libft". The purpose of this project is to gain a deeper understanding of the standard library functions and to create a reusable library that can be used in future projects.

## Table of Contents

- [Introduction](#introduction)
- [Functions](#functions)
- [Usage](#usage)
- [Contributing](#contributing)

## Introduction

The standard C library provides a wide range of functions that are commonly used in C programming. The goal of this project is to recreate some of these functions, such as string manipulation functions (`strlen`, `strcpy`, `strcat`, etc.), memory manipulation functions (`memset`, `memcpy`, `memmove`, etc.), and other utility functions (`atoi`, `isalpha`, `isdigit`, etc.).

## Functions

The libft library includes the following categories of functions:

- **Memory Functions**: Functions for memory allocation and manipulation.
- **String Functions**: Functions for string manipulation and analysis.
- **Character Functions**: Functions for character manipulation and analysis.
- **Conversion Functions**: Functions for converting between different data types.
- **List Functions**: Functions for manipulating linked lists.
- **Additional Functions**: Additional utility functions.

For a complete list of functions and their descriptions, please refer to the libft header file (`libft.h`) and the corresponding source files.

## Usage

To use the libft library in your own projects, follow these steps:

1. Clone the libft repository to your local machine.
2. Compile the library by running the `make` command in the libft directory. This will generate a static library file named `libft.a`.
3. Include the libft header file (`libft.h`) in your source code.
4. Link your program with the libft library by adding `-L/path/to/libft -lft` to your compiler flags. Replace `/path/to/libft` with the actual path to the libft directory.
5. Use the libft functions in your code as needed.

For example, to compile a program that uses the libft library, you can use the following command:

```
gcc -o my_program my_program.c -L/path/to/libft -lft
```

Make sure to replace `/path/to/libft` with the actual path to the libft directory.

## Contributing

Contributions to the Libft project are welcome. If you find any issues or have suggestions for improvements, please open an issue or submit a pull request.

