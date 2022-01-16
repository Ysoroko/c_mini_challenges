Turn-in directory: | 060_16_01_ft_macros_header|
-------------|-------------|
Files to turn-in: | ft_macros_header.h |
Allowed functions: | none

* Create a header file named "ft_macros_header.h"
* Inside "ft_macros_header.h" you will need to define two macros, MACRO_ONE and MACRO_TWO
* The header file must let you compile a ".c" file with the following content:

```C
#include <stdio.h>
#include "ft_macros_header.h"

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

int ft_macro_one(void)
{
    return (MACRO_ONE);
}

int ft_diff(void)
{
    return (MACRO_ONE - ft_strlen(MACRO_TWO));
}

int ft_fct(char *str, char c)
{
    int i = 0;

    while (str[i])
    {
        if (str[i] != c)
            return (0);
        i++;
    }
    return (1);
}

int main(void)
{
    int one = ft_macro_one();
    int diff = ft_diff();
    int fct = ft_fct(MACRO_TWO, 'w');

    printf("one: [%d]\n", one);
    printf("diff: [%d]\n", diff);
    printf("fct: [%d]\n", fct);
    
    return (0);
}
```

* When compiled and executed you need to produce the following result:

``` Bash
one: [8]
diff: [3]
fct: [1]
```

* You cannot modify the provided contents of the ".c" file
* Your header file must be protected against the double inclusion
