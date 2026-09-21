NAME	= libft.a

CC		= cc
CFLAGS	= -Wall -Wextra -Werror

SRCS	= $(wildcard srcs/*.c)
OBJS	= $(SRCS:.c=.o)
RM		= rm -f 

all:		$(NAME)

srcs/%.o:	%.c
			$(CC) $(CFLAGS) -c $< -I includes

$(NAME):	$(OBJS)
			ar -rc $@ $(OBJS)

all:		$(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re