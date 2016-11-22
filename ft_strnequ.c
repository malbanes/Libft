/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbanes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 20:29:04 by malbanes          #+#    #+#             */
/*   Updated: 2016/11/20 21:40:34 by malbanes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	unsigned char	*s1b;
	unsigned char	*s2b;
	int				i;

	s1b = (unsigned char*)s1;
	s2b = (unsigned char*)s2;
	i = 0;
	if ((!s1 && !s2) || (!s1 || !s2))
		return (0);
	while (s1b[i] && s2b[i] && (size_t)i < n)
	{
		if (s1b[i] != s2b[i])
			return (0);
		i++;
	}
	return (1);
}
