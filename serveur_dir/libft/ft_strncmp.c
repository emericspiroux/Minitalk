/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpontat <jpontat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/27 15:09:32 by jpontat           #+#    #+#             */
/*   Updated: 2013/12/27 15:26:36 by jpontat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	result;

	result = 0;
	while (n > 0 && *s1 == *s2 && *s1 != '\0' && *s2 != '\0')
	{
		n--;
		if (n != 0)
		{
			s1++;
			s2++;
		}
	}
	result = *s1 - *s2;
	return (result);
}
