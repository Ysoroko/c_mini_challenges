Turn-in directory: | 049_21_11_ft_random_n
-------------|-------------|
Files to turn-in: | ft_random_n.c |
Allowed functions: | printf, rand, srand, time

* Write a program which will output a random integer in a determined range
* The range is [1st argument of the program as int; 2nd argument of the program as int]
* **Tip**: you have already coded a useful function to convert a string to an int
* If the program doesn't have enough or has too many arguments, you should output "Error"
* If the first argument is bigger than (or equal to) the second, you should output "Error"
* All output should be followed by a newline character
* When the program is launched multiple times in a row with the same arguments, it should not always produce the same result
* Examples:
  ```Bash
  ./your_program_name a b c
  ./your_program_name 14 56
  ./your_program_name 56 14
  ./your_program_name -1 1
  
  ```
  Can produce the following output (integers printed must be random):
  ```Bash
  Error
  32
  Error
  0
  ```
