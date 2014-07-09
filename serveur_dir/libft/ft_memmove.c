/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: espiroux <espiroux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/27 14:50:18 by jpontat           #+#    #+#             */
/*   Updated: 2014/02/09 19:34:46 by espiroux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memmove(void *s1, const void *s2, size_t n)
{
	char		*str_s1;
	const char	*str_s2;

	str_s1 = s1;
	str_s2 = s2;
	if (str_s1 < str_s2)
	{
		while (n--)
			*str_s1++ = *str_s2++;
	}
	else
	{
		str_s1 += n - 1;
		str_s2 += n - 1;
		while (n--)
			*str_s1-- = *str_s2--;
	}
	return (s1);
}
