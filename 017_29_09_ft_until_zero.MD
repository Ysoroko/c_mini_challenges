Turn-in directory: | 17_29_09_ft_until_zero|
-------------|-------------|
Files to turn-in: | ft_until_zero.c |
Allowed functions: | printf

* Write the function **ft_until_zero** that will take an integer as an argument
* The function must print all the integers between the argument and 0 (both included), each followed by a newline character
* The printing must start at the argument, and depending on its sign print the numbers in ascending or descending order
* The function must be prototyped as follows:

   `void  ft_until_zero(int n);`
   
* Examples:
  ``` C
  //Call:
  ft_until_zero(2)
  ```
  
  ``` Bash
  # Output:
  2
  1
  0
  ```
  
  ``` C
  //Call:
  ft_until_zero(-3)
  ```
  
  ``` Bash
  # Output:
  -3
  -2
  -1
  0
  ```
