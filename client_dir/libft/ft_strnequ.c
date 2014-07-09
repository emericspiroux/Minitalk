/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpontat <jpontat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/27 15:10:29 by jpontat           #+#    #+#             */
/*   Updated: 2013/12/27 15:10:52 by jpontat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int	result;

	while (n-- != 0 && (*s1 == *s2) && ((*s1 != '\0') || (*s2 != '\0')))
	{
		s1++;
		s2++;
	}
	result = s1 - s2;
	if (*s1 == *s2)
		return (1);
	else
		return (0);
}
