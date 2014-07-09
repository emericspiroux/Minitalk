/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpontat <jpontat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/27 14:50:46 by jpontat           #+#    #+#             */
/*   Updated: 2013/12/27 14:50:50 by jpontat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	*ft_memset(void *s1, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = s1;
	while (n--)
		*ptr++ = (unsigned char)c;
	return (s1);
}
