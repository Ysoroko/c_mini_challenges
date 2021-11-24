Turn-in directory: | 047_18_11_ft_easy_putnbr
-------------|-------------|
Files to turn-in: | ft_easy_putnbr.c |
Allowed functions: | write

* Write a function **ft_easy_putnbr** which takes an integer as an argument
* The function must be prototyped as follows:
  ```C
  void  ft_easy_putnbr(int n);
  ```
* The function will never be tested with integers outside of range [-100 ; 100]
* If its argument is divisible by 8, print "Ocho" on standard output
* If its argument is divisible by 5, print "Cinco" on standard output
* If its argument is divisible by both 8 and 5, print "Muy bien" on standard output
* Othwerwise, print the argument itself
* All output must be followed by a newline character

* Examples:
  ```C
  ft_easy_putnbr(4); // will output "4"
  ft_easy_putnbr(8); // will output "Ocho"
  ft_easy_putnbr(-5); // will output "Cinco"
  ft_easy_putnbr(40); // will output "Muy bien"
  ```
