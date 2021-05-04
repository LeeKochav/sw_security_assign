#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
Author ID- 313233769
*/

/*
-fsanitize=address -  Detect buffer overflow 
This function demonstrates a heap buffer overflow error.
The ptr pointer overflowed because of "bad" allocation not including an extra byte for the string null terminate character ('\0’) and the unsafe C library function - strcpy.
Used the address option to identify the error and -g symbol for dubbeging the source code (see makefile FLAG1 alias)
*/
void option_address_func()
{
    char *msg = "Hello world!";
    char *ptr = NULL;

    ptr = malloc(strlen(msg));

    strcpy(ptr, msg);

    printf("%s\n", ptr);
}

/*
-fsanitize=float-divide-by-zero -  Detect floating-point division by zero.  Unlike other
similar options such as -  integer divided by zero option, -fsanitize=float-divide-by-zero is not enabled by default.
This function demonstrate a runtime error: division by zero.
Used the float-divide-by-zero  option to identify the error and -g symbol for dubbeging the source code (see makefile FLAG2 alias)
*/
void option_float_divide_by_zero_func()
{
    float a = 1.0;
    float b = 0;
    printf("%f\n", (a / b));
}
/*
-fsanitize=undefined
Enable UndefinedBehaviorSanitizer, a fast undefined behavior
detector at runtime. For example -  check that the result of "+", "*", and both unary and
binary "-" does not overflow in the signed arithmetics.
This function demonstrate a runtime error: signed integer overflow.
Used the undefined option to identify the error  (see makefile FLAG3 alias).
*/

void option_undefined_func()
{
    int n = __INT_MAX__;
    int m = n + 1;
    printf("%d\n", m);
}
int main(int argc, const char *argv[])
{
    option_address_func();
    option_float_divide_by_zero_func();
    option_undefined_func();
    printf("Compiled successfully\n");
    return 0;
}