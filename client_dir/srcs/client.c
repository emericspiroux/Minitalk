/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: espiroux <espiroux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/08 11:14:01 by jpontat           #+#    #+#             */
/*   Updated: 2014/02/09 19:22:52 by espiroux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "client.h"

int	main(int argc, char **argv)
{
	pid_t	pid;
	int		i;

	if (argc != 3)
	{
		write(1, "Usage: ./client [pid] [string]\n", 31);
		return (1);
	}
	pid = ft_atoi(argv[1]);
	kill(pid, 325413);
	while (argv[2][i])
	{
		bit_to_bit(argv[2][i], pid);
		i++;
	}
	bit_to_bit('\0', pid);
	return (0);
}
