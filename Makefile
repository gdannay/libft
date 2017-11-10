# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gdannay <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/07 18:54:36 by gdannay           #+#    #+#              #
#    Updated: 2017/11/10 13:40:20 by gdannay          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=		libft.a

SRCS	=		ft_memset.c		\
				ft_bzero.c		\
				ft_memcpy.c		\
				ft_memccpy.c	\
				ft_memmove.c	\
				ft_atoi.c		\
				ft_isalnum.c	\
				ft_isalpha.c	\
				ft_isascii.c	\
				ft_isdigit.c	\
				ft_isprint.c	\
				ft_memalloc.c	\
				ft_memchr.c		\
				ft_memcmp.c		\
				ft_memdel.c		\
				ft_strcat.c		\
				ft_strlcat.c	\
				ft_strchr.c		\
				ft_strcmp.c		\
				ft_strcpy.c		\
				ft_strdup.c		\
				ft_strlen.c		\
				ft_strncat.c	\
				ft_strncmp.c	\
				ft_strncpy.c	\
				ft_strnew.c		\
				ft_strnstr.c	\
				ft_strrchr.c	\
				ft_strstr.c		\
				ft_tolower.c	\
				ft_toupper.c	\
				ft_strdel.c		\
				ft_strclr.c		\
				ft_striter.c	\
				ft_striteri.c	\
				ft_strmap.c		\
				ft_strmapi.c	\
				ft_strequ.c
					
CC		=		gcc

OBJS	=		$(SRCS:.c=.o)

CFLAGS	=		-Wall -Wextra -Werror

all		:		$(NAME)

$(NAME)	:		$(OBJS)
				ar rc $(NAME) $(OBJS)
				ranlib $(NAME)

clean	:
				rm -rf $(OBJS)

fclean	:		clean
				rm -rf $(NAME)

re		:		fclean all
