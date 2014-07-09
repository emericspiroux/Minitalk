/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpontat <jpontat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/27 15:11:02 by jpontat           #+#    #+#             */
/*   Updated: 2013/12/27 15:12:09 by jpontat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char		*ft_strnew(size_t size)
{
	char	*tab;
	int		i;

	i = 0;
	tab = (char *)malloc(sizeof(*tab) * (size + 1));
	if (malloc (size) == NULL)
		return (NULL);
	while (tab[i] != '\0')
	{
		tab[i] = '\0';
		i++;
	}
	return (tab);
}
