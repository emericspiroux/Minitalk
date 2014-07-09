/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpontat <jpontat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/27 15:10:01 by jpontat           #+#    #+#             */
/*   Updated: 2013/12/27 15:10:14 by jpontat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char		*ft_strncpy(char *s1, char const *s2, size_t n)
{
	char	*ptr;

	ptr = s1;
	while (n-- && (*s1 != '\0' || *s2 != '\0'))
	{
		*s1 = *s2;
		*s1++ = *s2++;
	}
	return (ptr);
}
