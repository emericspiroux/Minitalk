/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpontat <jpontat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/27 14:59:32 by jpontat           #+#    #+#             */
/*   Updated: 2013/12/27 14:59:51 by jpontat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strdup(const char *s)
{
	size_t	n;
	char	*ptr;

	n = ft_strlen(s) + 1;
	ptr = (char *)malloc(n);
	if (ptr != NULL)
		ft_strcpy (ptr, s);
		return (ptr);
	return (NULL);
}
