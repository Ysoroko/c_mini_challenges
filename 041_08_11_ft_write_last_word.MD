Turn-in directory: | 041_08_11_ft_write_last_word|
-------------|-------------|
Files to turn-in: | ft_write_last_word.c |
Allowed functions: | write

* Write the function **ft_write_last_word** that takes a string as an argument
* The function must write the last word present in its argument on standard output stream, followed by a newline
* If its argument is a null pointer, it must write "Error", followed by a newline on standard error stream
* A "word" is the part of the string delimited by its start, its end and all the characters for which **isspace** function returns non-zero
* The function must be prototyped as follows:
   ```C
   void ft_write_last_word(char *str);
   ```
   
* Examples:
  ``` C
  ft_write_last_word(NULL); //will write "Error" on standard error stream
  ft_write_last_word("Bonjour"); //will write "Bonjour" on standard output stream
  ft_write_last_word("Bon jour"); //will write "jour" on standard output stream
  ft_write_last_word("Bon\tjour"); //will write "jour" on standard output stream
  ft_write_last_word(""); //will write a newline on standard output stream
  ft_write_last_word("         "); //will write a newline on standard output stream
  ft_write_last_word("\r\r\r\r"); //will write a newline on standard output stream
  ft_write_last_word(" Bon jour"); //will write "jour" on standard output stream
  ft_write_last_word("   Bonjour"); //will write "Bonjour" on standard output stream
  ft_write_last_word("Bonjour  "); //will write "Bonjour" on standard output stream
  ft_write_last_word("  abra ka dabra  "); //will write "dabra" on standard output stream
  ```
