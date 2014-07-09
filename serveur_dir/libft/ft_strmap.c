/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpontat <jpontat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/27 15:06:26 by jpontat           #+#    #+#             */
/*   Updated: 2013/12/27 15:07:57 by jpontat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	char	*tab;
	int		i;

	i = 0;
	if (!s || !f)
		return (NULL);
	tab = ft_strnew(ft_strlen(s) + 1);
	ft_strcpy(tab, s);
	while (tab[i] != '\0')
	{
		tab[i++] = f(*s++);
	}
	return (tab);
}
