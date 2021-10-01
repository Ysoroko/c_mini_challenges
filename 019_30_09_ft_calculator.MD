Turn-in directory: | 019_30_09_ft_calculator|
-------------|-------------|
Files to turn-in: | ft_calculator.c |
Allowed functions: | none

* Write the function **ft_calculator** that will take two integers and a character as arguments
* The function must return the result of the operation performed on two integers
* The operation will depend on the character argument:
  - If the character is "+", add the first integer to the second (a + b)
  - If the character is "-", substract the second integer from the first (a - b)
  - If the character is "\*", multiply the first integer by the second (a \* b)
  - If the character is "/", divide the first integer by the second (a / b)
  - If the character is "%", return the rest of the division a / b
  - If the character is different from those mentionned above, return 0

   `int  ft_calculator(int a, char operation, int b);`
   
* Examples:
  ``` C
  ft_calculator(3, '+', 2); //returns 5
  ft_calculator(3, '-', 2); //returns 1
  ft_calculator(9, '*', 5); //returns 45
  ft_calculator(9, '/', 5); //returns 1
  ft_calculator(9, '%', 5); //returns 4
  ft_calculator(9, 'a', 5); //returns 0
  
  ```
