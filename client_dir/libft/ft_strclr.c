/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpontat <jpontat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/27 14:57:56 by jpontat           #+#    #+#             */
/*   Updated: 2013/12/27 14:58:03 by jpontat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	ft_strclr(char *s)
{
	while (*s != '\0')
		*s++ = '\0';
}