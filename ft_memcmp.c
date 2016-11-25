/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbanes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 19:58:35 by malbanes          #+#    #+#             */
/*   Updated: 2016/11/23 18:02:10 by malbanes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int				i;
	unsigned char	*s1b;
	unsigned char	*s2b;

	s1b = (unsigned char*)s1;
	s2b = (unsigned char*)s2;
	if (n == 0)
		return (0);
	i = 0;
	while (--n)
	{
		if (s1b[i] != s2b[i])
			return (s1b[i] - s2b[i]);
		i++;
	}
	return (s1b[i] - s2b[i]);
}
