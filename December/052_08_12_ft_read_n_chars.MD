Turn-in directory: | 052_08_12_ft_read_n_chars|
-------------|-------------|
Files to turn-in: | ft_read_n_chars.c |
Allowed functions: | open, read, close, printf

* Write a program that will have two arguments
* The first argument represents the name of the file in the same repository as your ".c" file
* The second argument represents the number of characters you will have to read in this file
* You need to read and and print all the read characters on the standard output
* Before exiting, your program must close the file if it was opened
* Error handling:
  
  For any of the following cases your program must return 1 (and print nothing!):
  - You have a wrong number of arguments
  - The number of characters you need to read is 0 or bigger than 1024
  - It's impossible to open the given file
  - A call to "close" function fails

  Otherwise, it must return 0
* Example:
  - Imagine a simple file named "text.txt" with the following contents:
  
  ``` Bash
  0123456789 abcdefghi
  ```
  - These are the results of different uses of your program:
  
  ``` Bash
  ./a.out text.txt 1 # will print "0"
  ./a.out text.txt 3 # will print "012"
  ./a.out text.txt 10 # will print "0123456789"
  ./a.out text.txt 500 # will print "0123456789 abcdefghi"
  ./a.out text.txt abc # will print nothing
  ```
  


* Tips:
  - Since your program doesn't read more than 1024 characters, you can declare a string used in "read" function with
    ```C
    char  buf[1024];
    ```
  - The files can be removed by using the command "rm **file_name**" (be careful with it!)
  - You must compile your code using gcc with flags "-Wall -Wextra -Werror" 
