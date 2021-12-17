Turn-in directory: | 055_17_12_ft_binary_to_char|
-------------|-------------|
Files to turn-in: | ft_binary_to_char.c |
Allowed functions: | none

* Write a function called **ft_binary_to_char** that will take a string as its argument
* The function must be prototyped as follows:
```C
char ft_binary_to_char(char *binary);
```
* Its argument will be a string which will be a binary representation of a character 
* The function must return the character represented by this string
* If the argument has characters not present in binary base or the argument has the wrong length for a character representation, return '\0'
* Example:
``` C
ft_binary_to_char("01000100"); //will return 'D' 
ft_binary_to_char("00110010"); //will return '2'
ft_binary_to_char("0123456789"); //will return '\0'
```
* Compile with "gcc -Wall -Wextra -Werror"
* Tips:
  - You can use [this website](https://sebastienguillon.com/test/javascript/convertisseur.html) for easy binary to decimal conversion
  - The command in the terminal
    ``` Bash
    man ascii
    ```
    will show you the ascii values for the characters
