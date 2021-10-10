Turn-in directory: | 024_08_10_ft_decrements |
-------------|-------------|
Files to turn-in: | ft_decrements.c |
Allowed functions: | none
* The code below is incomplete and won't compile!
* Fix it without removing anything from it so that it compiles and produces the following output:

<endl>
  
  ```Bash
ft_decrement_one_ret: [1]
ft_decrement_two_ret: [0]
ft_decrement_three_ret: [1]
ft_decrement_four_ret: [0]
  ```

<endl>
  
  ```C
  #include <stdio.h>

int ft_decrement_one(int n)
{
	return_value = n;
	n = n - 1;

	return (return_value);
}

int ft_decrement_two(int n)
{
	n = n - 1;
	return_value = n;

	return (return_value);
}

int ft_decrement_three(int n)
{
	return_value = n--;

	return (return_value);
}

int ft_decrement_four(int n)
{
	return_value = --n;

	return (return_value);
}


int main(void)
{
    ft_decrement_one_ret = ft_decrement_one(d);
    ft_decrement_two_ret = ft_decrement_two(d);
    ft_decrement_three_ret = ft_decrement_three(d);
    ft_decrement_four_ret = ft_decrement_four(d);
    printf("ft_decrement_one_ret: [%d]\n", ft_decrement_one_ret);	// 1
    printf("ft_decrement_two_ret: [%d]\n", ft_decrement_two_ret);	// 0
    printf("ft_decrement_three_ret: [%d]\n", ft_decrement_three_ret);	// 1
    printf("ft_decrement_four_ret: [%d]\n", ft_decrement_four_ret);	// 0

    return (0);
}
  ```
