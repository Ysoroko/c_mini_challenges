Turn-in directory: | 020_01_10_ft_descriptive_hundred|
-------------|-------------|
Files to turn-in: | ft_descriptive_hundred.c |
Allowed functions: | printf

* Write the function **ft_descriptive_hundred** that will take an integer as an argument
* The integer passed as an argument will belong to a range [0, 999]
* The function must print the integer following the format:
  ``` Bash
  n_hundred Hundred under_hundred
  ```
* The function must only call printf once with the following arguments:
  ``` C
  // Note: You are free to name variables as you wish
  printf("%d Hundred %d\n", n_hundred, under_hundred);
  ```
* If the integer argument is outside range [0, 999], nothing needs to be printed
  
* The function must be prototyped as follows:
 `void  ft_descriptive_hundred(int n);`
   
* Examples:
  ``` C
  // Call 1
  ft_descriptive_hundred(456);
  ```
  
  ``` Bash
  # Output 1
  4 Hundred 56
  ```
  
  <br />
  
  ``` C
  // Call 2
  ft_descriptive_hundred(32);
  ```
  
  ``` Bash
  # Output 2
  0 Hundred 32
  ```
  
  <br />
  
  ``` C
  // Call 3
  ft_descriptive_hundred(0);
  ```
  
  ``` Bash
  # Output 3
  0 Hundred 0
  ```
  
  
