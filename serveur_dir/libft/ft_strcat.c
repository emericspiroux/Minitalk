/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpontat <jpontat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/27 14:57:18 by jpontat           #+#    #+#             */
/*   Updated: 2013/12/27 14:57:25 by jpontat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	size_t	len;
	size_t	len2;
	char	*ptr;

	ptr = s1;
	len = ft_strlen(s1);
	len2 = ft_strlen(s2);
	if (*s2)
	{
		ptr = ptr + s1[len];
		while (len2--)
			ptr[len++] = *s2++;
	}
	ptr[len] = 0;
	return (s1);
}
