Turn-in directory: | 034_25_10_ft_comp_ptr|
-------------|-------------|
Files to turn-in: | ft_comp_ptr.c |
Allowed functions: | none

* Write the function **ft_comp_ptr** that will 2 integer pointers as arguments, "a" and "b"
* The function must compare the values stored at pointed addresses
* It has to store the smallest value of two at the address pointed to by "a"
* It has to store the biggest value of two at the address pointed to by "b"
* The function must be prototyped as follows:
   ```C
   void ft_comp_ptr(int *a, int *b);
   ```
   
* Examples:
  ``` C
  int a;
  int b;
  
  a = 45;
  b = 12;
  ft_comp_ptr(&a, &b);
  printf("%d %d\n", a, b); // will print "12 45"
  ```
