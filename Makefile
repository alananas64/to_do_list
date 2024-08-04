NAME		=	to_do_list
CC			=	cc
SRCS		=	main.c \
				add_task.c
OBJS		=	$(SRCS:.c=.o)
%.o: %.c
	$(CC) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $^ -o $@

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
