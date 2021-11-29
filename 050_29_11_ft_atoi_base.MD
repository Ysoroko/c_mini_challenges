Turn-in directory: | 050_29_11_ft_atoi_base|
-------------|-------------|
Files to turn-in: | ft_atoi_base.c |
Allowed functions: | none

* Write the function **ft_atoi_base** that takes two strings as arguments
* The function must be prototyped as follows:
   ```C
   int ft_atoi_base(char *str, char *base);
   ```
* The function must return the corresponding integer representation of its 1st argument in 2nd argument as a base
* Tips:
  * 987 is the integer representation of the string "987" in a decimal base "0123456789"
  * 3 is the integer representation of the string "11" in a binary base "01"
  * 15 is the integer representation of the string "F" in a hexadecimal base "0123456789ABCDEF"
* If the base has one of the following errors, you must return 0:
  * The same character is encountered twice in the base
  * The base has the characters '-', '+' or any characters from the function isspace
  * The base is an empty string or only has one character
* If any of the arguments is a NULL pointer, you must return 0
* Examples:
  ```C
  ft_atoi_base("5", "0123456789"); //will return 5
  ft_atoi_base("f", "abcdefghijk"); //will return 5
  ft_atoi_base("10", "0123456789"); //will return 10
  ft_atoi_base("ba", "abcdefghij"); //will return 10
  ft_atoi_base("10", "9876543210"); //will return 89
  ft_atoi_base("1C8", "0123456789ABCDEF"); //will return 456
  ft_atoi_base("111001000", "01"); //will return 456
  ft_atoi_base("5", "44"); //will return 0
  ft_atoi_base("5", "-4"); //will return 0
  ft_atoi_base("5", "4 8"); //will return 0
  ft_atoi_base("5", "a"); //will return 0
  
  ```
