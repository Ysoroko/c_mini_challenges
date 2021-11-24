Turn-in directory: | 4_22_09_ft_to_print_or_not_to_print |
-------------|-------------|
Files to turn-in: | ft_to_print_or_not_to_print.c |
Allowed functions: | none, only call to ft_to_print_or_not_to_print is allowed |



* In the code below you have an already ready function **ft_to_print_or_not_to_print** and an uncomplete **main** function
* Replace only the two commented out lines in main function to call ft_to_print_or_not_to_print and produce the following output:
  - **"To print or not to print!"**
  - **"I refuse to print your string!"**

<endl>
  
  ```C
  #include <stdio.h>
  
  void  ft_to_print_or_not_to_print(char *str, int to_print)
  {
    if (to_print == 0)
      printf("I refuse to print your string!\n");
    else
      printf("%s\n", str);
  }
  
  int main(void)
  {
    // Line 1 to replace with your line of code
    // Line 2 to replace with your line of code
    return (0);
  }
  ```
