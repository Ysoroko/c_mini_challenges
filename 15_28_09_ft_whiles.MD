Turn-in directory: | 15_28_09_ft_whiles |
-------------|-------------|
Files to turn-in: | ft_whiles.c |
Allowed functions: | none
* In the code below you have an already ready function **main** and an incomplete function **ft_all_numbers_until_d**
* Replace only the commented out conditions inside the function scope to produce the following output:

<endl>
  
  ```Bash
  0
  0
  1
  0
  1
  2
  ```

<endl>
  
  ```C
  #include <stdio.h>
  
  /// This function will print all the numbers from 0 until its argument d (0 and d included)
  /// Each printing is followed by a newline
  void  ft_all_numbers_until_d(int d)
  {
    int i;
    
    i = 0;
    while (//to complete)
    {
      printf("%d\n", i);
      //to complete
    }
             
  }
  
  int main(void)
  {
    ft_all_numbers_until_d(0);
    ft_all_numbers_until_d(1);
    ft_all_numbers_until_d(2);
    return (0);
  }
  ```
