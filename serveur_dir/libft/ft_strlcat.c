/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpontat <jpontat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/27 15:05:02 by jpontat           #+#    #+#             */
/*   Updated: 2013/12/27 15:05:12 by jpontat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

size_t	ft_strlcat(char *s1, const char *s2, size_t n)
{
	size_t	len;
	size_t	len2;
	size_t	x;

	len2 = ft_strlen(s2);
	len = ft_strlen(s1);
	x = len2 + len;
	if (n <= len)
		return (n + len2);
	if (n >= x)
		ft_strncat(s1, s2, len2);
	else
		ft_strncat(s1, s2, ((n - len) - 1));
	return (x);
}
