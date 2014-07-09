/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: espiroux <espiroux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/08 15:05:32 by espiroux          #+#    #+#             */
/*   Updated: 2014/02/09 19:38:15 by espiroux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "server.h"

int				main(void)
{
	pid_t		pid;
	char		letter_convert;

	pid = getpid();
	write(1, "Server started.\n", 16);
	ft_putstr("PID :");
	ft_putnbr(pid);
	write(1, "\n", 1);
	if ((signal(SIGUSR1, handler)) == SIG_ERR)
		return (1);
	if ((signal(SIGUSR2, handler)) == SIG_ERR)
		return (1);
	while (1)
	{
		pause();
	}
	return (0);
}

void			handler(int sig)
{
	static int	i;
	int			letter_conv;
	int			letter[8];

	if (sig == SIGUSR1)
	{
		letter[i] = 0;
		i++;
	}
	if (sig == SIGUSR2)
	{
		letter[i] = 1;
		i++;
	}
	if (i > 7)
	{
		letter_conv = convert_to_char(letter);
		if (letter_conv == '\0')
			ft_putchar('\n');
		else
			ft_putchar(letter_conv);
		i = 0;
	}
}

void			ft_error(int err)
{
	if (err == 2)
	{
		ft_putendl("Perte de donnée.");
		exit(0);
	}
}

int				convert_to_char(int *letter)
{
	int			i;
	int			j;
	int			res;

	i = 0;
	j = 1;
	res = 0;
	while (i < 8)
	{
		if (letter[i] == 1)
			res += j;
		i++;
		j = j * 2;
	}
	return (res);
}
