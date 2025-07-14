NAME: libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = 
OBJS = $(SRCS :.c=.o)
 
all: libft.a

$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
$(CC) $(CFLAGS) -c $< -o $@

clean:
rm -f $(OBJS)

fclean: clean
rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re