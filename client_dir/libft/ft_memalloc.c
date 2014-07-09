/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpontat <jpontat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/27 14:44:06 by jpontat           #+#    #+#             */
/*   Updated: 2013/12/27 14:44:10 by jpontat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	*ft_memalloc(size_t size)
{
	void	*tab;
	char	*tab2;
	int		i;

	i = 0;
	tab = malloc (size);
	tab2 = tab;
	if (malloc (size) == NULL)
		return (NULL);
	while (tab2[i] != '\0')
	{
		tab2[i] = 0;
		i++;
	}
	return (tab);
}
