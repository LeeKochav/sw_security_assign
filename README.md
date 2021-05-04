# C-Assignment. GCC Sanitize Options and Stack Protecting options

Author ID: 313233769.

## GCC Sanitize Options

The program demonstrate compiling options of GCC Sanitize.

## Requirements

gcc version 7.5.0

## Compilation -Q4.1

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

## Compilation -Q4.2

The following are the compilations options:

1. Compile with -fno-stack-protector option - in the terminal run the command:
   ```sh
    make program2
   ```
2. Compile with -fstack_protector option - in the terminal run the command:
   ```sh
   make program2_stack_protector
   ```
3. Compile with -fstack_protector_strong option - in the terminal run the command:
   ```sh
   make program2_stack_protector_strong
   ```
4. Compile with -fstack_protector_all option - in the terminal run the command:
   ```sh
   make program2_stack_protector_all.
   ```

## To test several compilation options in the terminal run the command after each test:

```sh
make clean
```

Comments and more explanations can be found in the source code files and in man page.
