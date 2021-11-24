Turn-in directory: | 038_03_11_ft_write_backwards|
-------------|-------------|
Files to turn-in: | ft_write_backwards.c |
Allowed functions: | write

* Write the function **ft_write_backwards** that takes a string as its argument
* The function must write the string backwards on the standard output stream, followed by a newline
* If the string argument is a null pointer, the function must write "NULL" on standard output stream, followed by a newline
* The function must be prototyped as follows:
   ```C
   void ft_write_backwards(char *str);
   ```
   
* Examples:
  ``` C
  ft_write_backwards("Dima"); // will print "amiD", followed by a newline
  ft_write_backwards("raw"); // will print "war", followed by a newline
  ft_write_backwards("god"); // will print "dog", followed by a newline
  ft_write_backwards("0123456789"); // will print "9876543210", followed by a newline
  ft_write_backwards("000"); // will print "000", followed by a newline
  ft_write_backwards(NULL); // will print "NULL", followed by a newline
  ```
