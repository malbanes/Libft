/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbanes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 20:12:29 by malbanes          #+#    #+#             */
/*   Updated: 2016/11/20 20:15:08 by malbanes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int i;
	int j;
	int k;

	i = 0;
	k = 0;
	j = 0;
	if (s2[0] == '\0')
		return ((char*)s1);
	while (s1[i] && s2[j])
	{
		k = i;
		j = 0;
		while (s1[k] == s2[j])
		{
			if (s2[j + 1] == '\0')
				return ((char*)&s1[i]);
			k++;
			j++;
		}
		i++;
	}
	return (NULL);
}
