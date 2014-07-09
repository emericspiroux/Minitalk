# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: espiroux <espiroux@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/21 15:43:26 by jpontat           #+#    #+#              #
#    Updated: 2014/02/09 19:15:00 by espiroux         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

all: sub_make_all

clean: sub_make_clean
	@rm -f
fclean: sub_make_fclean
	@rm -f

sub_make_all:
	@make -C ./serveur_dir all
	@make -C ./client_dir all
	@cp ./serveur_dir/serveur ./serveur
	@cp ./client_dir/client ./client

sub_make_clean:
	@make -C ./serveur_dir clean
	@make -C ./client_dir clean

sub_make_fclean:
	@make -C ./serveur_dir fclean
	@make -C ./client_dir fclean
	@rm  ./serveur ./client

re: fclean all
