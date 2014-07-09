/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpontat <jpontat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/27 14:40:56 by jpontat           #+#    #+#             */
/*   Updated: 2013/12/27 14:41:00 by jpontat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

int	ft_atoi(const char *nptr)
{
	int		sign;
	int		n;
	size_t	i;

	sign = 1;
	i = 0;
	n = 0;
	while (nptr[i] != '\0' && ft_strchr(" \n\f\r\t\v", nptr[i]) != NULL)
		i++;
	if (nptr[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (nptr[i] == '+')
		i++;
	while (nptr[i] != '\0'
			&& ft_strchr(" \n\f\r\t\v", nptr[i]) == NULL
			&& (nptr[i] >= '0' && nptr[i] <= '9'))
	{
		n = n * 10;
		n += nptr[i] - '0';
		i++;
	}
	return (sign * n);
}
