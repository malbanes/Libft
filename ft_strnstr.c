/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbanes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 19:31:43 by malbanes          #+#    #+#             */
/*   Updated: 2016/11/23 16:56:55 by malbanes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	int i;
	int j;
	int k;

	i = 0;
	k = 0;
	j = 0;
	if (s2[0] == '\0' || s1 == s2)
		return ((char*)s1);
	while (s1[i] && s2[j])
	{
		k = i;
		j = 0;
		while (s1[k] == s2[j])
		{
			if (s2[j + 1] == '\0' && (unsigned int)j + (unsigned int)i < len)
				return ((char*)s1 + i);
			k++;
			j++;
		}
		i++;
	}
	return (NULL);
}
