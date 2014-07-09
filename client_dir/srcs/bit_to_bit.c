/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bit_to_bit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: espiroux <espiroux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/08 14:27:57 by jpontat           #+#    #+#             */
/*   Updated: 2014/02/09 19:23:50 by espiroux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "client.h"

int	bit_to_bit(char c, pid_t pid)
{
	int	i;

	i = 0;
	while (i < 8)
	{
		if ((c % 2))
			kill(pid, SIGUSR2);
		else
			kill(pid, SIGUSR1);
		c /= 2;
		usleep(300);
		i++;
	}
	return (0);
}
