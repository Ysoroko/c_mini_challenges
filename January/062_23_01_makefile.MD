# ------------------------------ Colors ------------------------------

BOLD_PURPLE			=	\033[1;35m

BOLD_CYAN			=	\033[1;36m

BOLD_YELLOW			=	\033[1;33m

NO_COLOR			=	\033[0m

BOLD_GREEN			=	\033[1;32m


# ------------------------------------- VARS ----------------------------------

NAME		=	tchoo_tchoo

# $(VARIABLE_NAME) will simply be replaced by the value of the VARIABLE_NAME when executed
WELCOME		=	echo "$(BOLD_PURPLE)❤️ Welcome to the Makefile introduction!\n$(NO_COLOR)"

COMPILE		=	gcc

FLAGS		=	-Wall -Wextra -Werror 

EXE_NAME	=	hey_i_am_your_executable

# ------------------------------- SOURCE FILES --------------------------------

SOURCES		=	i_am_a_train.c

# This rule will allow us to replace our ".c" (source) files by ".o" (object) files
# The advantage of using the ".o" object files in a Makefile is that we can create a relation
# where they will only be recompiled if something has changed in our ".c" files
# 
# Imagine working on a big project, with dozens of ".c" files.
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

# ------------------------------------- RULES ---------------------------------

# The top rule will always be called when "make" command is executed in the terminal
# When written on the same line after ":", the rule will execute another rule
# Here, the "all" rule will execute "NAME" rule
all: $(NAME)

# The $(OBJECTS) here is what will allow us to transform ".c" files into ".o" before compiling
$(NAME): $(OBJECTS)
	$(COMPILE) $(FLAGS) $(OBJECTS) $(EXE_NAME)

run: $(NAME)
	./$(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(EXEC)
	
re:	fclean all

.cpp.o:
	${COMPILE} ${FLAGS} -c $< -o ${<:.cpp=.o}

.PHONY:	all clean fclean re run
