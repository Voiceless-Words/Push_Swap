# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pragolan <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/27 17:11:12 by pragolan          #+#    #+#              #
#    Updated: 2018/08/30 11:57:47 by pragolan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

LIB = ./libft/libft.a

NAME = checker

NAME1 = push_swap

FLAGS =  -Wall -Wextra -Werror -I.

SRCC = ./checkers/checker.c ./checkers/ft_evaluate.c\
	   ./checkers/ft_check_sorted.c ./checkers/ft_init_ab.c\
	   ./checkers/ft_push_a.c ./checkers/ft_push_b.c ./checkers/ft_rotate_a.c\
	   ./checkers/ft_rotate_ab.c ./checkers/ft_rotate_b.c\
	   ./checkers/ft_rrotate_a.c ./checkers/ft_rrotate_ab.c\
	   ./checkers/ft_rrotate_b.c ./checkers/ft_swap_a.c\
	   ./checkers/ft_swap_ab.c ./checkers/ft_swap_b.c\
	   ./checkers/ft_free_stacks.c
SRCS = ./checkers/ft_init_ab.c ./checkers/ft_push_a.c\
	   ./checkers/ft_push_b.c ./checkers/ft_rotate_a.c\
	   ./checkers/ft_rotate_ab.c ./checkers/ft_rotate_b.c\
	   ./checkers/ft_rrotate_a.c ./checkers/ft_rrotate_ab.c\
	   ./checkers/ft_rrotate_b.c ./checkers/ft_swap_a.c\
	   ./checkers/ft_swap_ab.c ./checkers/ft_swap_b.c\
	   ./checkers/ft_free_stacks.c ./push_swaps/push_swap.c\
	   ./push_swaps/ft_evaluate.c ./push_swaps/ft_check_sorted_a.c\
	   ./push_swaps/ft_sort_behind.c ./push_swaps/ft_sort_front.c


all: $(NAME) $(NAME1)

$(NAME):
	make -C ./libft
	$(CC) $(FLAGS) -o $(NAME) $(SRCC) $(LIB)

$(NAME1):
	$(CC) $(FLAGS) -o $(NAME1) $(SRCS) $(LIB)

clean:
	rm -fr $(SRCO)
	make clean -C ./libft

fclean: clean
	rm -fr $(NAME)
	rm -fr $(NAME1)
	make fclean -C ./libft

re: fclean all
