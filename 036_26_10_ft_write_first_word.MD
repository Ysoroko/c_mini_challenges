Turn-in directory: | 036_26_10_ft_write_first_word|
-------------|-------------|
Files to turn-in: | ft_write_first_word.c |
Allowed functions: | write

* Write the function **ft_write_first_word** that takes a string as an argument
* The function must write the first word present in its argument on standard output stream, followed by a newline
* If its argument is a null pointer, it must write "Error", followed by a newline on standard error stream, followed by a newline
* A "word" is the part of the string delimited by its start, its end and all the characters for which **isspace** function returns non-zero
* The function must be prototyped as follows:
   ```C
   void ft_write_first_word(char *str);
   ```
   
* Examples:
  ``` C
  ft_write_first_word("Bonjour"); //will write "Bonjour\n" on standard output stream
  ft_write_first_word("Bon jour"); //will write "Bon\n" on standard output stream
  ft_write_first_word("Bon\tjour"); //will write "Bon\n" on standard output stream
  ft_write_first_word(""); //will write "\n" on standard output stream
  ft_write_first_word("         "); //will write "\n" on standard output stream
  ft_write_first_word("\r\r\r\r"); //will write "\n" on standard output stream
  ft_write_first_word(" Bon jour"); //will write "Bon\n" on standard output stream
  ft_write_first_word(" Bonjour"); //will write "Bonjour\n" on standard output stream
  ft_write_first_word(NULL); //will write "Error\n" on standard error stream
  ```
