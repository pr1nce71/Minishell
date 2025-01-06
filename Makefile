# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/06 13:50:26 by yevkahar          #+#    #+#              #
#    Updated: 2025/01/06 13:50:27 by yevkahar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



NAME = minishell
CC		=	gcc -g #-fsanitize=address
FLAGS	=	-Wall -Wextra -Werror
LIBS	=	-lreadline
RM		=	rm -rf

HEADER	=	minishell.h

MPATH	=	minishell.c \
			ft_split.c \
			env_init.c \
			split_arg.c \
			word_cpy.c \
			lexer.c \
			tokens.c \
			tokens2.c \
			echo.c \
			utils.c \
			utils2.c \
			env.c \
			quots.c \
			export.c \
			error_handler.c \
			loop_to_do.c\
			change_dir.c\
			pars_cmd.c\
			exit_min.c\
			extract_cmd.c\
			unset.c\
			redirection.c\
			built-ins.c\
			pipes_fork.c\
			sig_handle.c\
			pipe_handling.c\
			env_var.c\
			heredoc.c\
			free_exit.c\
			utils3.c\
			
OBJ_M	= $(MPATH:.c=.o)

%.o: %.c $(HEADER) Makefile
	@$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJ_M)
	@$ make bonus -C libft
	@$ mv libft/libft.a .
	@$(CC) $(OBJ_M) $(LIBS) libft.a -o $(NAME)
	@rm libft.a

all: $(NAME)

clean:
	@$(RM) $(OBJ_M)
	@make clean -C libft
fclean: clean
	@$(RM) $(NAME)
re: fclean all
.PHONY: all clean fclean re
