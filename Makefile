NAME	=	libft.a

CC	=	gcc

SRCS	=	ft_memchr.c		

OBJS	=	$(SRCS:.c=.o)

CFLAGS	=	-Wall -Wextra -Werror

all	:	$(NAME)

$(NAME)	:	$(OBJS)
		ar rc $(NAME) $(OBJS)
		ranlib $(NAME)

clean	:
		rm -rf $(OBJS)

fclean	:	clean
		rm -rf $(NAME)

re	:	fclean all
