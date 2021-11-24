Turn-in directory: | 039_06_11_ft_write_one_in_two_chars|
-------------|-------------|
Files to turn-in: | ft_write_one_in_two_chars.c |
Allowed functions: | write

* Write the function **ft_write_one_in_two_chars** that takes a string as its argument
* The function must write every one out of two characters starting from the first
* If the argument is a null pointer, the function must write "NULL" on standard output stream
* If the argument is an empty string, the function must write "Empty string" on standard output stream
* In all the above cases, the final output must be followed by a newline character
* The function must be prototyped as follows:
   ```C
   void ft_write_one_in_two_chars(char *str);
   ```
   
* Examples:
  ``` C
  ft_write_one_in_two_chars("Dima"); // will print "Dm", followed by a newline
  ft_write_one_in_two_chars("raw"); // will print "rw", followed by a newline
  ft_write_one_in_two_chars("god"); // will print "gd", followed by a newline
  ft_write_one_in_two_chars("0123456789"); // will print "02468", followed by a newline
  ft_write_one_in_two_chars(""); // will print "Empty string", followed by a newline
  ft_write_one_in_two_chars(NULL); // will print "NULL", followed by a newline
  ```
