# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/12 16:01:33 by yevkahar          #+#    #+#              #
#    Updated: 2024/11/29 15:10:26 by yevkahar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=   libft.a
SRCS	=	ft_atoi.c \
			ft_itoa.c \
			ft_bzero.c \
			ft_memcpy.c \
			ft_memset.c \
			ft_substr.c \
			ft_strlen.c \
			ft_strchr.c \
			ft_calloc.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_strdup.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_strlcat.c \
			ft_memmove.c \
			ft_strlcpy.c \
			ft_strjoin.c \
			ft_tolower.c \
			ft_toupper.c \
			ft_strrchr.c \
			ft_strnstr.c \
			ft_strncmp.c \
			ft_strtrim.c \
			ft_strmapi.c \
			ft_striteri.c \
			ft_putnbr_fd.c \
			ft_putstr_fd.c \
			ft_putchar_fd.c \
			ft_putendl_fd.c \
			ft_split.c \
			ft_lstnew.c \
			ft_lstiter.c \
			ft_lstadd_front.c \
			ft_lstlast.c \
			ft_lstsize.c
			

			
OBJS	= $(SRCS:.c=.o)

RM		= rm -f
LIBC	= ar -rcs
FLAGS	= -Wall -Wextra -Werror
INCS	= .

.c.o :
	$(CC) $(FLAGS) -c $< -o $(<:.c=.o) -I$(INCS)

$(NAME): $(OBJS)
	$(LIBC) $(NAME) $(OBJS) 

all: $(NAME)

clean:
	$(RM) -f $(OBJS)

fclean: clean
	$(RM) $(NAME) $(bonus)

re: fclean all
