/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpontat <jpontat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/27 15:12:52 by jpontat           #+#    #+#             */
/*   Updated: 2013/12/27 15:13:16 by jpontat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char		*ft_strstr(const char *s1, const char *s2)
{
	char	*ptr;
	char	*ptr2;
	size_t	len;

	ptr2 = (char *)s2;
	ptr = (char *)s1;
	len = ft_strlen(ptr2);
	if (len == 0)
		return (ptr);
	while (*ptr != '\0')
	{
		if (ft_memcmp(ptr, ptr2, len) == 0)
		{
			return (ptr);
		}
		ptr++;
	}
	return (NULL);
}
