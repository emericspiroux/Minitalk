/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpontat <jpontat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/27 14:49:19 by jpontat           #+#    #+#             */
/*   Updated: 2013/12/27 14:49:25 by jpontat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*i;
	unsigned char	*j;

	i = (unsigned char *)s1;
	j = (unsigned char *)s2;
	while (n > 0 && *i == *j)
	{
		n--;
		if (n != 0)
		{
			i++;
			j++;
		}
	}
	return (*i - *j);
}
