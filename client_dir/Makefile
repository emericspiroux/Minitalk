# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: espiroux <espiroux@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/20 09:49:07 by espiroux          #+#    #+#              #
#    Updated: 2014/02/09 19:16:57 by espiroux         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

export CC= gcc
export CFLAGS= -Werror -Wall -Wextra -O3

NAME=client
LIBFT_DIR=libft
INC_DIR=includes/
SRC_DIR=srcs/
XFLAGS=-O3

FT_C=$(SRC_DIR)client.c $(SRC_DIR)bit_to_bit.c

FT_O=$(FT_C:.c=.o)

.PHONY: all, clean, fclean, re

all: $(NAME)

$(NAME): $(LIBFT_DIR)/libft.a $(FT_O)
	@gcc  $(FT_O) -I./$(INC_DIR) -Ilibft -Llibft -lft -o $(NAME)   -g
	@echo " \033[33mCompilation de $(NAME) -> \033[32mDone !\033[m"
	@echo "\t\033[31m   ___ _ _            _   "
	@echo "\t  / __\ (_) ___ _ __ | |_ "
	@echo "\t / /  | | |/ _ \ '_ \| __|"
	@echo "\t/ /___| | |  __/ | | | |_ "
	@echo "\t\____/|_|_|\___|_| |_|\__|"
	@echo "\t                          "

	@echo "\t\033[36m _______________________________\033[m"
	@echo "\t\033[36m|______\033[34m   Yeah \
	Man !    ;)\033[36m______|\033[m\n"

%.o : %.c
	@$(CC) $(FLAGS) -o $@ -c $^ -I./$(INC_DIR) -I./$(LIBFT_DIR)
	@echo -n .

$(LIBFT_DIR)/libft.a:
	@(cd $(LIBFT_DIR) && $(MAKE) all)

clean:
	@echo "\033[31mDelete: \033[33m" $(FT_O) "\033[m"
	@rm -f $(FT_O)
	@(cd $(LIBFT_DIR) && $(MAKE) $@)

fclean: clean
	@rm -f $(NAME)
	@(cd $(LIBFT_DIR) && $(MAKE) $@)

re: fclean all
