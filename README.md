# C-Assignment. GCC Sanitize Options 
Author ID: 313233769.

This program demonstrate compiling GCC-sanitizer.

## Requirements
gcc version 7.5.0 

## Compilation

The following are the compilations options:

1. Compile without any flags - in the terminal run the command: 
    ```sh
     make program
    ```
2. Compile with -fsanitize=address option - in the terminal run the command:
    ```sh
    make program_option_address
    ```
3. Compile with -fsanitize=float-divide-by-zero option - in the terminal run the command: 
    ```sh
    make program_option_float_divide_by_zero
    ```
4. Compile with -fsanitize=undefined option - in the terminal run the command: 
    ```sh
    make program_option_undefined.
    ```
#### To test several compilation options in the terminal run the command after each test: 
```sh
make clean
```
Comments and more explanations can be found in the source code file: program.c
