#include <stdio.h>

/*
* Write a function that will take a string as an argument
* The function must check if the string argument is equal to "example" or not
* It must return 1 if it's equal to "example" or 0 otherwise
* Allowed functions: none
*
* The function must be prototyped as follows:
*   `int ft_example(char *argument_string);`
*/
int ft_example(char *argument_string)
{
    int i = 0;
    char string_example[8] = "example";

    if (!argument_string || !argument_string[0])
        return (0);

    // Go through the argument string until it ends
    while (argument_string[i] != '\0')
    {
        // If any of the letters is different, return 0
        if (argument_string[i] != string_example[i])
            return 0;
        // Go to the next letter
        i++;
    }

    // If the string's length if bigger than 7 (= length of "example"), the string is different
    if (i > 7)
        return (0);

    // If all the letters are the same, return 1
    return (1);
}

// You can always add some additional functions if needed
void test_ft_example(char *argument_string)
{
    int result = ft_example(argument_string);
    printf("Testing with \"%s\"\t Result: [%d]\n", argument_string, result);
}

// This is a suggestion of a main function you should write to test your code before submitting it
// Try to compile and run it with "gcc -Wall -Wextra -Werror example.c && ./a.out"
// Try to read and understand what the test code does
int main(void)
{
    char string_example[] = "example";
    char bad_example_one[] = "KO";
    char bad_example_two[] = "examplee";
    char bad_example_three[] = "EXAMPLE";
    char *null_pointer = NULL;
    char empty_string[] = "";

    test_ft_example(string_example);
    test_ft_example(bad_example_one);
    test_ft_example(bad_example_two);
    test_ft_example(bad_example_three);
    test_ft_example(null_pointer);
    test_ft_example(empty_string);
}