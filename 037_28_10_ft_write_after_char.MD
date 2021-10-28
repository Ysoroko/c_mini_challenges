Turn-in directory: | 037_28_10_ft_write_after_char|
-------------|-------------|
Files to turn-in: | ft_write_after_char.c |
Allowed functions: | write

* Write the function **ft_write_after_char** that takes a string and a character as arguments
* The function must write the part of the string after the first occurence of its character argument
* The output must be followed by a newline
* If its string argument is a null pointer, it must not write anything
* The function must be prototyped as follows:
   ```C
   void ft_write_after_char(char *str, char c);
   ```
   
* Examples:
  ``` C
  ft_write_after_char("Dima", 'i'); //will print "ma", followed by a newline
  ft_write_after_char("Dima", 'D'); // will print "ima", followed by a newline
  ft_write_after_char("Dima", 'G'); // will only print a newline character
  ft_write_after_char("Dima", 'a'); // will only print a newline character
  ft_write_after_char(NULL, 'o'); // will print nothing
  ft_write_after_char("Dima", '\0'); //will only print a newline character
  ft_write_after_char("Diiima", 'i'); // will print "iima" followed by a newline
  ft_write_after_char("Dididima", 'd') // will print "idima" followed by a newline
  ```
