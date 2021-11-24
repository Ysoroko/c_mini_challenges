Turn-in directory: | 042_14_11_ft_mini_atoi|
-------------|-------------|
Files to turn-in: | ft_mini_atoi.c |
Allowed functions: | none

* Write the function **ft_mini_atoi** that takes a string as an argument
* The function must be prototyped as follows:
   ```C
   int ft_mini_atoi(char *str);
   ```
* The function must return the corresponding integer representation of its string argument
* The string will be formatted as follows:
```
[s][d] where:
[s] is a character '-' or nothing
[d] is any amount of digits
```
* For example these are all possible arguments:
  * "-124"
  * "0"
  * "632"
* The function will never be tested with invalid arguments such as:
  * "abc"
  * "+86"
  * "   32"
* If its argument is a null pointer, it must return 0
* You don't need to handle the overflows, but you must handle the maximum and minimum integer values
   
* Examples:
  ``` C
  ft_mini_atoi(NULL); //will return 0
  ft_mini_atoi("123"); //will return 123
  ft_mini_atoi("-789"); //will return -789
  ft_mini_atoi("-0"); //will return 0
  ```
