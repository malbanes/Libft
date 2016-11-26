/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbanes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 19:31:43 by malbanes          #+#    #+#             */
/*   Updated: 2016/11/23 18:38:05 by malbanes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int i;
	int j;
	int k;

	i = 0;
	k = 0;
	j = 0;
	if (little[0] == '\0' || big == little)
		return ((char*)big);
	while (big[i] && little[j])
	{
		k = i;
		j = 0;
		while (big[k] == little[j])
		{
			if (little[j + 1] == '\0' && j + i < (int)len)
				return ((char*)big + i);
			k++;
			j++;
		}
		i++;
	}
	return (NULL);
}
