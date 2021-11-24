Turn-in directory: | 025_10_10_ft_call_the_president |
-------------|-------------|
Files to turn-in: | ft_call_the_president.c |
Allowed functions: | none
* The code below is incomplete and will not compile
* You must write **one and only one line of code** in each function to produce the following output:
```Bach
-911, what's your emergency?
-This is the captain of the precinct, couldn't 911 help you?
-This is out of the commissionner's jurisdiction, I'll transfer you.
-FBI doesn't have the necessary ressources, listen just talk to the CIA, okay?
-Wow this seems too important for the CIA to handle. I'll give you homeland security.
-I'll call the president right now. Please stay on the line.
-Seriously? Okay Timmy I'll send you the wifi password... Again...
The secret code is: 2147483647
```
* Also, only one call of function per line is allowed

```C
#include <stdio.h>

int	ft_president(void)
{
	int	secret_code;

	secret_code = 2147483647;
	printf("-Seriously? Okay Timmy I'll send you the wifi password... Again...\n");
	return (secret_code);
}

int		ft_homeland_security(void)
{
	printf("-I'll call the president right now. Please stay on the line.")
}

int		ft_cia(void)
{
	printf("-Wow this seems too important for the CIA to handle. I'll give you homeland security\n")
}

int		ft_fbi(void)
{
	printf("-FBI doesn't have the necessary ressources, listen just talk to the CIA, okay?");
}

int	ft_commissionner(void)
{
	printf("-This is out of the commissionner's jurisdiction, I'll transfer you.\n")
}

int	ft_captain(void)
{
	printf("-This is the captain of the precinct, couldn't 911 help you?\n")
}

int ft_police(void)
{
	printf("-911, what's your emergency?\n")
}

int main(void)
{
	int	secret_code;

	printf("The secret code is: %d\n", secret_code);
	return (0);
}
```


