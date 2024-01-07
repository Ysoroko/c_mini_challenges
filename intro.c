/*
** This is an introduction to C code
** Try to download this file to your computer and compile this code with
** gcc -Wall -Wextra -Werror intro.c
** Then run the code with the command "./a.out"
** Read the comments in this code, modify values and
** try to understand perfectly what each line of code does
*/

#include <stdio.h> // Include the library stdio.h to be able to use "printf" function

// Declare a function called "main"
// - with integer (int) as a return type
// - which takes no arguments (void)
int main(void)
{
	// "int" stands for "integer" and is used to store numbers
	// integers cannot store decimal value numbers like 3.14, only "integers" like 3, -1, 0 etc.
	int		integer_variable; // declare a variable of type "int" called "integer_variable"

	// declare a variable of type "char" called "character variable"
	// "char" stands for "character" and is used to store characters
	char	character_variable;

	// assign (= give) a value "4" to the variable called "integer_variable"
	integer_variable = 4;

	// assign (= give) a value 's' to the variable called "character_variable"
	// Note: in C, characters are written with single quotes '', not double quotes ""
	character_variable = 's';

	// Call a function "printf"
	// Give it 2 arguments:
	// 1st argument = a string "%d\n" 
	//	%d specifies that the next (2nd argument) will be of type "integer"
	//	Try to replace it by "%c" or %s. Check the error of the compilation
	//	"\n" means... try to figure it out yourself. Remove it and run the code.
	// 2nd argument = "integer_variable". At this point, value "4" is stored inside the "integer variable"
	printf("%d\n", integer_variable);

	// assign (= give) a value "-1" to the variable called "integer_variable"
	integer_variable = -1;

	// Call printf gain, in the same way
	// But this time, inter_variable stores a different value
	// Notice how the output has changed
	printf("%d\n", integer_variable);

	// Call printf gain, in the same way
	// But this time, with "%c" instead of "%d" and "character_variable"
	// %c specifies that the next (2nd argument) will be of type "character"
	printf("%c\n", character_variable);

	// Try to assign a different value to the variable "character_variable"
	// Then write the code to call "printf" function to output its value like before

	// Since there is "int" in "int main(void)"
	// We need to return a value/variable of type "integer"
	// We can simply return 0 or any other value
	return (0);
}