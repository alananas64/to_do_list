#the name of the executable file
NAME		=	to_do_list

#the compiler
CC			=	gcc

# the .c files that will get run to execute the project
SRCS		=	main.c \
				add_task.c

# turning the .c files to object files to compile the project
OBJS		=	$(SRCS:.c=.o)
%.o: %.c
	$(CC) -c $< -o $@

# giving the name of the object files the same as the .c files
$(NAME): $(OBJS)
	$(CC) $^ -o $@

#Rules for the make file
all: $(NAME)

#cleans the object files to preserve storage
clean:
	$(RM) $(OBJS)

#calls clean and removes the executable file
fclean: clean
	$(RM) $(NAME)

# calls fclean and all to rebuild the project
re: fclean all
