/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpontat <jpontat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/27 14:49:40 by jpontat           #+#    #+#             */
/*   Updated: 2013/12/27 14:49:42 by jpontat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	*ft_memcpy(void *s1, void const *s2, size_t n)
{
	char		*ptr;
	const char	*ptr2;

	ptr = s1;
	ptr2 = s2;
	while (n--)
	{
		*ptr = *ptr2;
		ptr++;
		ptr2++;
	}
	return (s1);
}
