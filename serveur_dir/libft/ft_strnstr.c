/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpontat <jpontat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/27 15:12:20 by jpontat           #+#    #+#             */
/*   Updated: 2013/12/27 15:13:36 by jpontat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char		*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	char	*ptr;
	char	*ptr2;
	size_t	len;

	ptr2 = (char *)s2;
	ptr = (char *)s1;
	len = ft_strlen(ptr2);
	if (n < len)
		return (NULL);
	if (len == 0)
		return (ptr);
	while (n-- && *ptr != '\0')
	{
		if (ft_memcmp(ptr, ptr2, len) == 0)
			return (ptr);
		ptr++;
	}
	return (NULL);
}
