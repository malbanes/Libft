/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbanes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 19:57:09 by malbanes          #+#    #+#             */
/*   Updated: 2016/11/20 19:58:14 by malbanes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s2;
	unsigned char	sch;

	s2 = (unsigned char*)s;
	sch = (unsigned char)c;
	while (n > 0)
	{
		if (*s2 == sch)
			return ((unsigned char*)s);
		s2++;
		s++;
		n--;
	}
	return (NULL);
}
