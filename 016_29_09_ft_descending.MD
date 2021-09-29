Turn-in directory: | 16_29_09_ft_descending|
-------------|-------------|
Files to turn-in: | ft_descending.c |
Allowed functions: | printf

* Write the function **ft_descending** that will take an integer as an argument
* The function must print all the integers between its argument and 0
* The printing must start with the argument and be in descending order
* If its argument is less than 0, it must print "Already lower than 0", followed by a newline
* Each integer printed must be followed by a newline
* The function must be prototyped as follows:

   `void ft_descending(int n);`
   
* Examples:
  ``` C
  //Call:
  ft_descending(2)
  ```
  
  ``` Bash
  # Output:
  2
  1
  0
  ```
  
  ``` C
  //Call:
  ft_descending(-3)
  ```
  
  ``` Bash
  # Output:
  Already lower than 0
  ```
  
  ```C
  //Call:
  ft_descending(0)
  ```
  
  ``` Bash
  # Output:
  0
  ```
