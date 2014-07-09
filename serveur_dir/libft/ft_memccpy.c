/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpontat <jpontat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/27 14:44:30 by jpontat           #+#    #+#             */
/*   Updated: 2013/12/27 14:44:56 by jpontat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	*ptr2;

	ptr2 = (unsigned char *)s2;
	ptr = (unsigned char *)s1;
	while (n--)
	{
		*ptr = *ptr2;
		if (*ptr2 == c)
			return ((void *)ptr + 1);
		ptr++;
		ptr2++;
	}
	return (NULL);
}
