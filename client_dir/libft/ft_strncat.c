/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: espiroux <espiroux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/27 15:09:00 by jpontat           #+#    #+#             */
/*   Updated: 2014/02/09 19:37:21 by espiroux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char		*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	len;
	size_t	len2;
	char	*ptr;

	ptr = s1;
	len = ft_strlen(s1);
	len2 = ft_strlen(s2);
	if (*s2)
	{
		ptr = ptr + ptr[len];
		while (n-- && len2--)
			ptr[len++] = *s2++;
	}
	ptr[len] = 0;
	return (s1);
}
