Turn-in directory: | 022_02_10_ft_descriptive_sum|
-------------|-------------|
Files to turn-in: | ft_descriptive_sum.c |
Allowed functions: | printf

* Write the function **ft_descriptive_sum** that will take an integer as an argument
* The integer passed as an argument will belong to a range [0, 999]
* The function must print the integer following the format:
  ``` Bash
  x_hundred + y_tens + z_digits
  ```
* The function must only call printf once with the following arguments:
  ``` C
  // Note: You are free to name variables as you wish
  printf("%d + %d + %d\n", x_hundred, y_tens, z_digits);
  ```
* If the integer argument is outside range [0, 999], nothing needs to be printed
  
* The function must be prototyped as follows:
 `void  ft_descriptive_sum(int n);`
   
* Examples:
  ``` C
  // Call 1
  ft_descriptive_sum(456);
  ```
  
  ``` Bash
  # Output 1
  400 + 50 + 6
  ```
  
  <br />
  
  ``` C
  // Call 2
  ft_descriptive_sum(32);
  ```
  
  ``` Bash
  # Output 2
  0 + 30 + 2
  ```
  
  <br />
  
  ``` C
  // Call 3
  ft_descriptive_sum(0);
  ```
  
  ``` Bash
  # Output 3
  0 + 0 + 0
  ```
  
  
