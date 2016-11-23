/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbanes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 20:29:44 by malbanes          #+#    #+#             */
/*   Updated: 2016/11/23 16:59:20 by malbanes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*s1;
	char	*s2;
	size_t	i;
	size_t	j;

	j = 0;
	s1 = (char*)s;
	i = (size_t)start;
	if (!(s))
		return (NULL);
	if (!(s2 = (char*)malloc(sizeof(char) * len + 1)))
		return (NULL);
	while (s1[i] && j < len)
		s2[j++] = s1[i++];
	s2[j] = '\0';
	return (s2);
}
