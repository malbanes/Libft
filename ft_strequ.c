/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbanes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 20:28:29 by malbanes          #+#    #+#             */
/*   Updated: 2016/11/21 17:23:15 by malbanes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	int				i;
	unsigned char	*s1b;
	unsigned char	*s2b;

	s1b = (unsigned char*)s1;
	s2b = (unsigned char*)s2;
	i = 0;
	if ((!s1 && !s2) || (!s1 || !s2))
		return (0);
	if (ft_strlen(s1) != ft_strlen(s2))
		return (0);
	while (s1b[i] && s2b[i])
	{
		if (s1b[i] != s2b[i])
			return (0);
		i++;
	}
	return (1);
}
