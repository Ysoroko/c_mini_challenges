Turn-in directory: | 054_13_12_ft_str_sep|
-------------|-------------|
Files to turn-in: | ft_str_sep.c |
Allowed functions: | none

* Consider the following program:
``` C
#include <stdio.h>

int main(void)
{
	char	str[18] = "Can you split me?";

 	// Line 1 to add
  	// Line 2 to add
  	// Line 3 to add
  	printf("%s\n", str);
  	printf("%s\n", &(str[4]));
 	printf("%s\n", &(str[8]));
  	printf("%s\n", &(str[14]));
	return (0);
}
```
* Replace the three commented out lines with your code to obtain the following output when running the program:
```
> ./a.out | cat -e
Can$
you$
split$
me?$
```
* You cannot modify anything in the code apart from the three specified lines of code!
* One instruction per line!
