/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: espiroux <espiroux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/08 15:06:15 by espiroux          #+#    #+#             */
/*   Updated: 2014/02/08 19:45:56 by espiroux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERVER_H
# define SERVER_H
# include <signal.h>
# include <unistd.h>
# include <stdlib.h>
# include "libft.h"

void		ft_error(int err);
void		handler(int sig);
int			convert_to_char(int *letter);

#endif /* !SERVER_H */
