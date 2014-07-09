/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpontat <jpontat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/27 15:08:11 by jpontat           #+#    #+#             */
/*   Updated: 2013/12/27 15:08:43 by jpontat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char				*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;
	unsigned int	j;

	j = 0;
	i = 0;
	if (!s || !f)
		return (NULL);
	str = ft_strnew(ft_strlen(s) + 1);
	ft_strcpy(str, s);
	while (str[j] != '\0')
		str[j++] = f(i++, *s++);
	return (str);
}
