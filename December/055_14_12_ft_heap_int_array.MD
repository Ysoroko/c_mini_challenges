Turn-in directory: | 054_14_12_ft_heap_int_array|
-------------|-------------|
Files to turn-in: | ft_heap_int_array.c |
Allowed functions: | malloc

* Write a function called **ft_heap_int_array** that will take 2 integers as arguments
* The function must be prototyped as follows:
```C
int *ft_heap_int_array(int size, int filler);
```
* The function must return an array of integers of **size** elements
* Each element's value of the returned array must be set to **filler**
* Example:
``` C
ft_heap_int_array(4, 14); // will create and return the following array: [14 14 14 14]
ft_heap_int_array(1, 32); // will create and return the following array: [32]
ft_heap_int_array(2, 0); // will create and return the following array: [0 0]
```
* If a "malloc" call fails, return a NULL pointer
* Compile with "gcc -Wall -Wextra -Werror"
