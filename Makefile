# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lwiller <lwiller@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/30 02:43:42 by lwiller           #+#    #+#              #
#    Updated: 2020/12/10 08:17:50 by lwiller          ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memccpy.c ft_memchr.c \
ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c \
ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c \
ft_strdup.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c \
ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c \
ft_tolower.c ft_toupper.c 

SRCBONS = ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c \
ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c

INCS	= libft.h

OBJS	= ${SRCS:.c=.o}

OBJBONS = ${SRCBONS:.c=.o}

NAME	= libft.a

CC		= gcc

CFLAGS	= -Wall -Werror -Wextra

%.o: %.c	libft.h
		$(CC) -c $< $(CFLAGS)

${NAME}:${OBJS}
		 ar rcs ${NAME} $<
		 @echo "Libft done !"

all:	${NAME}

bonus:	${OBJBONS} ${OBJS}
			ar rcs ${NAME} ${OBJBONS} ${OBJS}
			@echo "Libft Bonus done !"
		

clean:	
		rm -f ${OBJS} ${OBJBONS}

fclean:	clean
		rm -f ${NAME}

re:		fclean all

.PHONY: fclean clean re all bonus
