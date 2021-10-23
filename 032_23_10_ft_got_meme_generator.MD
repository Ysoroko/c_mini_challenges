Turn-in directory: | 032_23_10_ft_got_meme_generator|
-------------|-------------|
Files to turn-in: | ft_got_meme_generator.c |
Allowed functions: | none

* Time to do some serious business now. We will recreate the following Game of Thrones meme behaviour.

![image](https://user-images.githubusercontent.com/36443074/138554344-4453c544-55dd-4365-895c-ff68f38307c4.png)

* Write a function called **ft_got_meme_generator** that will take a string as an argument.
* It must be prototyped as follows:
  ``` C
  void	ft_daenerys_meme_generator(char	*str)
  ```
* It will replace every occurence of letters 'e', 'a' and 'o' in that string by the vowel 'i'
* For example, the following main function
  ``` C
  #include <stdio.h>
  
  int	main(void)
  {
	char	str[30] = "Let me fight for you khaleesi";

	ft_got_meme_generator(str);
	printf("%s\n",str); // Will print "Lit mi fight fir yiu khiliisi";
	return (0);
  }
  ```
  Will produce the following output:
  ```Bash
  Lit mi fight fir yiu khiliisi
  ```
