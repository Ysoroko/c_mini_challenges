Turn-in directory: | 059_12_01_ft_digit_split|
-------------|-------------|
Files to turn-in: | ft_digit_split.c |
Allowed functions: | malloc, free

* Write the function **ft_digit_split** that will take a string as an argument
* It must return an array of integers, where every element will be the integer represented by the corresponding character of its argument
* If the string contains a non digit character, return a NULL pointer
* You cannot have any memory leaks!

* The function must be prototyped as follows:
   ```C
   int *ft_digit_split(char *str);
   ```

* Example:
  ```C
  ft_digit_split("0123"); // will return the following array: [0 , 1 , 2 , 3]
  ft_digit_split("abc"); // will return NULL
  ```
