/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbanes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 19:57:09 by malbanes          #+#    #+#             */
/*   Updated: 2016/11/26 12:43:03 by malbanes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s2;
	unsigned char	sch;
	int				i;

	i = 0;
	s2 = (unsigned char*)s;
	sch = (unsigned char)c;
	while (n > 0)
	{
		if (s2[i] == sch)
			return ((unsigned char*)s + i);
		i++;
		n--;
	}
	return (NULL);
}
