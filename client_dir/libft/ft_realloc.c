/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpontat <jpontat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/27 14:56:23 by jpontat           #+#    #+#             */
/*   Updated: 2013/12/27 14:56:56 by jpontat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdlib.h>
#include	<stdio.h>
#include	<string.h>
#include	"libft.h"

void	*ft_realloc(void *ptr, size_t size)
{
	char	*ptr2;

	if (size = 0)
		free (ptr2);
	if (ptr == NULL)
	{
		ptr2 = malloc(size);
		return (ptr2);
	}
	size = ft_strlen(ptr);
	ptr2 = (char *)malloc(sizeof(*ptr) * size);
	ptr2 = ft_memcpy(ptr2, ptr, ft_strlen(ptr2));
	return (ptr);
}
