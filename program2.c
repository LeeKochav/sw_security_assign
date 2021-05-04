#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
Author ID- 313233769
*/

/*
This function demonstrates a buffer overflow.
Buffer size=8 and the use of an unsafe function strcpy results in stack overflow.
-fstack-protector enables stack protection for vulnerable functions that contain:
    -A character array larger than 8 bytes.
    -An 8-bit integer array larger than 8 bytes.
    -A call to alloca() with either a variable size or a constant size bigger than 8 bytes.

*/
void stack_protc_func()
{
    char buffer[10];
    strcpy(buffer, "0123456789abcdabcdabcdabcdabcd");
    return;
}

/*
-fstack-protector-strong enables stack protection for vulnerable functions that contain:
    An array of any size and type.
    A call to alloca().
    A local variable that has its address taken.
    
*/
void stack_protc_s_func()
{
    char buffer[5];
    buffer[5] = 'c';
    return;
}

/*
-fstack-protector-all adds stack protection to all functions regardless of their vulnerability.
*/
void stack_protector_a_func(char *input)
{
    char res[20] = " ";
    strcat(res, input);
    printf(res);
}
int main(int argc, const char *argv[])
{
    stack_protc_func();
    stack_protc_s_func();
    stack_protector_a_func(argv[1]);

    return 0;
}