Turn-in directory: | 042_14_11_ft_real_atoi|
-------------|-------------|
Files to turn-in: | ft_real_atoi.c |
Allowed functions: | none

* Write the function **ft_real_atoi** that takes a string as an argument
* It will reproduce the exact behavious of the <stdlib.h> function atoi
* The function must be prototyped as follows:
   ```C
   int ft_real_atoi(char *str);
   ```
* The function must return the corresponding integer representation of its string argument
* There is no restrictions on its argument, but in order to be converted the string will be formatted as follows:
```
[spaces][sign][digits][any non digits][anything] where:
- [spaces] is any amount of spaces (spaces being defined as in isspace function)
- [sign] is either a '+' or a '-' character (will not always be present)
- [digits] is any amount of digits
- [any non digits] is any amount of non digits
- [anything] is any amount of any characters
```
* For example these are all possible arguments:
  * " \t-124a64"
  * "\r+000000\v"
  * "632"
  * "\f           \f"
  * "1000000000000000000000"
  * "-1000000000000000000000"
  * "abc18"
  * "+4294967296"
  * "+-+-+-+-+-1234567890+-+-+-+-+-"
* If its argument is a null pointer, it must return 0
* The overflows must work as in real atoi function
   
* Examples:
  You can use the real atoi function to see how it interacts with different arguments
