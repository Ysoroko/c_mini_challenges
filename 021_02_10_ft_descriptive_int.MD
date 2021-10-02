Turn-in directory: | 021_02_10_ft_descriptive_int|
-------------|-------------|
Files to turn-in: | ft_descriptive_int.c |
Allowed functions: | printf

* Write the function **ft_descriptive_int** that will take an integer as an argument
* The function must print the integer following the format:
  ``` Bash
  n_milliards Milliards n_millions Millions n_thousand Thousand n_hundred Hundred under_hundred
  ```
* To approach the real world calling, if the integer is composed of 0 Milliards/Millions/Thousands etc, you will not actually write "0 Milliards/Millions/Thousands"
* The function must be prototyped as follows:
 `void  ft_descriptive_int(int n);`
   
* Examples:
  ``` C
  // Call 1
  ft_descriptive_int(-2147483648);
  ```
  
  ``` Bash
  # Output 1 (-2.147.483.648)
  -2 Milliards 147 Millions 483 Thousand 6 Hundred 48
  ```
  
  <br />
  
  ``` C
  // Call 2 
  ft_descriptive_int(480000);
  ```
  
  ``` Bash
  # Output 2 (480.000)
  480 Thousand
  ```
  
  <br />
  
  ``` C
  // Call 3
  ft_descriptive_int(0);
  ```
  
  ``` Bash
  # Output 3
  ```
  
    <br />
  
  ``` C
  // Call 4
  ft_descriptive_int(8068);
  ```
  
  ``` Bash
  # Output 4 (8.068)
  8 Thousand 68
  ```
  
  
  
