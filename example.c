// stdio.h is the library which defines "printf"
// Note that in this example no external functions are allowed, so you MUST NOT submit code with "printf" inside
#include <stdio.h>

/*
* Write a function that will take an integer as an argument
* The function must check if the integer is equal to 1 or not
* It must return 1 if it's equal to 1 or 0 otherwise
* Allowed functions: none
*
* The function must be prototyped as follows:
*   `int ft_example(char *argument_string);`
*/
int ft_example(int argument)
{
    if (argument != 1)
    {
        return (0);
    }
    else
    {
        return (1);
    }
    // Shorter version:
    // return (argument == 1);
}

// This is a suggestion of a main function you should write to test your code before submitting it
// You must NOT submit a main function, unless it's asked to submit a "program" (and not a "function")
// Try to compile and run it with "gcc -Wall -Wextra -Werror example.c && ./a.out"
// Try to read and understand what the test code does
int main(void)
{
    printf("Testing with [%d]\t Result: [%d]\n", 1, ft_example(1));
    printf("Testing with [%d]\t Result: [%d]\n", 0, ft_example(0));
    printf("Testing with [%d]\t Result: [%d]\n", 123, ft_example(123));
    printf("Testing with [%d]\t Result: [%d]\n", -456, ft_example(-456));
    return (1);
}
