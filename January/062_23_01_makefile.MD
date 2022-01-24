Turn-in directory: | 062_23_01_makefile|
-------------|-------------|
Files to turn-in: | Makefile, i_am_a_train.c |
Allowed functions: | printf

* This exercice is an introduction to Makefiles!
* You will need to create 3 Makefile rules: welcome, dependant_rule and phony_conflict
* Some reading is involved, some concepts might look tricky, but don't be discouraged, if you are using the terminal, you know how to use Makefile
* First of all, start by creating a file named "Makefile" and paste the following code inside. The instructions follow after the code
``` Bash
# ------------------------------ Colors ------------------------------

# These are the special codes used to output colors in the terminal

BOLD_PURPLE			=	\033[1;35m

BOLD_CYAN			=	\033[1;36m

BOLD_YELLOW			=	\033[1;33m

BOLD_GREEN			=	\033[1;32m


NO_COLOR			=	\033[0m


# ------------------------------------- VARS ----------------------------------

# We simply create a variable named "NAME" and give it a value "tchoo_tchoo"
NAME			=	tchoo_tchoo

# Here, BOLD_PURPLE is a variable name (defined higher, in "Colors" section)
# $(BOLD_PUPRLE) is a way to replace the variable name by its value "\033[1;35m"
# So $(VARIABLE_NAME) will simply be replaced by the value of the VARIABLE_NAME when executed
WELCOME1			=	echo "$(BOLD_PURPLE)❤️ Welcome to the Makefile introduction!\n$(NO_COLOR)"

COMPILE			=	gcc

FLAGS			=	-Wall -Wextra -Werror 

EXE_NAME		=	hey_i_am_your_executable

# In the "gcc" command, "-o" followed by a string will allow you to name your executable differently
# (not "a.out")
# Here, we will name our executable "hey_i_am_your_executable"
GIVE_EXE_NAME	=	-o $(EXE_NAME)

# ------------------------------- SOURCE FILES --------------------------------

SOURCES		=	i_am_a_train.c

# This rule will allow us to replace our ".c" (source) files by ".o" (object) files
# The advantage of using the ".o" object files in a Makefile is that we can create a relation
# where they will only be recompiled if something has changed in our ".c" files
# 
# Imagine working on a big project, with a looooot of ".c" files.
# You compile your project, create the "a.out" executable
# and then add exactly 1 line of code to one of the ".c" files.
#
# Without using the object files, when recompiling by using "gcc file1.c file2.c etc."
# the command will recompile all of the files and replace the executable,
# which will take a lot of time.
#
# With ".o" object files, (gcc file1.o, file2.o etc.) it will only recompile this one
# modified file needed to update the executable 
OBJECTS		=	$(SOURCES:.c=.o)

# So basically, with "$(SOURCES:.c=.o)" we tell the compiler "hey, transform my .c files into .o objects"
# What it does in reality is it calls a standard hidden rule '.c.o'.
# The problem is, we dont choose the compiler, the flags etc. during the compilation
# But we can define our own rule ".c.o" in which we choose it all ourselves
# Here's an example:
# .c.o:
#		gcc -Wall -Wextra -Werror -c $< -o ${<:.c=.o}


# ------------------------------------- RULES ---------------------------------

# The top rule will always be called when "make" command is executed in the terminal
# No need to type "make all", since this is the top rule
# When written on the same line after ":", the rule will execute another rule
# Here, the "all" rule will execute "NAME" rule
# There is no second line so the only thing this rule will do is call another rule
all: $(NAME)

# The $(OBJECTS) here is what will allow us to transform ".c" files into ".o" before compiling
# There is a second line here where we write what commands will be executed by the rule
$(NAME): $(OBJECTS)
#	All the $(VAR_NAME) are replaced by the variable values when executed:
#	$(COMPILE) = gcc
#	$(FLAGS) = -Wall -Wextra -Werror
#	$(OBJECTS) = $(SOURCES:.c=.o) = i_am_a_train.o
#	$(GIVE_EXE_NAME) = -o $(EXE_NAME) = -o hey_i_am_your_executable
	$(COMPILE) $(FLAGS) $(OBJECTS) $(GIVE_EXE_NAME)

# This rule is not using ".o" object files so it will recompile everything every time it's called
recompile:
	$(COMPILE) $(FLAGS) $(SOURCES) $(GIVE_EXE_NAME)

# The "run" rule will call the $(NAME) rule to compile the program
# It will then launch the program (so you don't have to type "./a.out" after compilation)
run: $(NAME)
	./$(EXE_NAME)

# The "clean" rule will remove all the ".o" files and a file named "phony_conflict"
clean:
	rm -rf $(OBJECTS)
	rm -rf phony_conflict

# The "fclean" rule will also remove the executable
fclean: clean
	rm -rf $(EXE_NAME)

# The "re" rule will delete everything and compile again
re:	fclean all

# ------------------------------------- TO DO ---------------------------------

# The rule "welcome" must display the message "❤️ Welcome to the Makefile introduction!" in 4 colors:
# purple, cyan, green and yellow
# Use the WELCOME1 variable to display it in purple
# Create variables WELCOME2, WELCOME3 and WELCOME4 and use them to display different colors
welcome:
# to complete

# This rule should have the dependancy with the rule "welcome"
# It should call the rule "welcome"
# Do not use variables in this rule
dependant_rule:

# "touch" command creates a file named as its argument
create_phony_conflict_file:
	touch phony_conflict

# The "@" before the command will only display the result on output, not the command itself
# Try to remove it and execute the command again
phony_conflict:
	@echo "If a file named "phony_conflict" exists, I will only execute if you add \"phony_conflict\" to \".PHONY\" section"


# ------------------------------------- PHONY ---------------------------------
# ".PHONY" is a special section where we include the names of our rules after ".PHONY"
# If we don't do it here and we have a file named like one of our rules,
# the command "make rule_name" will not execute as expected
.PHONY:	all clean fclean re run welcome dependant_rule create_phony_conflict_file

```

* It contains all the basics you will need to know to use Makefile
* ⚠️ All files/commands that follow must be created/executed in the same repository as your Makefile file!
* First of all, start by creating a program in a file named "i_am_a_train.c".

  The program must simply print "Tchoo-tchoo" followed by a newline on standard output, nothing more
  
* Normally in order to compile it you would write "gcc -Wall -Wextra -Werror i_am_a_train.c"
* The Makefile already has a "rule" which saves us the time for this! Simply execute the command "make" in your terminal
* Another rule named "run" allows you to run the executable after compilation! Try to execute "make run" in your terminal
* The general syntax for executing Makefile rules is "make rule_name"
* The advantage is that we only need to write the rule in Makefile once and then call the rule instead of rewriting the commands in the terminal every time
* This might look unnecessary to you at this point, but as your projects will grow bigger, the commands in the terminal will become too complex and long to rewrite every time you want to execute one
* Have a look inside the Makefile. It might look a bit scary, but it's actually very simple (there are more comments than bash lines in it)
* A Makefile usually consists of two parts: variables and rules.
* Rules are the commands you would normally write in your terminal and they are usually using variables inside.
* The provided Makefile already has all the standard rules you will need for your ".c" file.
* Run the command "make" and the command "make recompile". Do you see the difference? Can you understand why?
* Look at the OBJECTS variable and its comments for more information.
* Remove the ".o" files by running "make clean" command.
* Remove the ".o" files and then the executable as well by running "make fclean" command
* Remove everything and restart the compilation by running "make re" command.
* Note how "fclean" and "re" are calling other rules when they are being called themselves
* Let's create our own rules and variables!
* Complete the rule "welcome". Use the variable WELCOME1 to display "❤️ Welcome to the Makefile introduction!" in purple.

	Then, create 3 variables WELCOME2, WELCOME3 and WELCOME4, each displaying the same message in a different color.

	You can use the color variables present in "Colors" section at the top of the Makefile

* The dependancy is used when a rule is calling another rule. Can you complete the rule "dependant_rule" so it only does one thing, calls the "welcome" rule?
	Do not use the variables for this.
* The ".PHONY" section at the very end of the Makefile is a sort of protection for the rule names.
* Run the command "make phony_conflict" to see the message it displays. Now run "make create_phony_conflict_file" to create file named "phony_conflict", same as our rule name "phony_conflict"
* Run the command "make phony_conflict" again. Do you see an issue? Modify the Makefile to make the message appear when the file "phony_conflict" exists
* This covers the basics of a Makefile. Makefile is a tool which will help you to save a lot of time by automating the commands you do all the time.
* [Here](https://github.com/Ysoroko/ft_printf/blob/master/Makefile) you can find an example of a minimalistic Makefile, and [here](https://github.com/Ysoroko/Minishell/blob/master/Makefile) a bit more complex one
