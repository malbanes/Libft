/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbanes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 20:12:29 by malbanes          #+#    #+#             */
/*   Updated: 2016/11/23 18:22:10 by malbanes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	int i;
	int j;
	int k;

	i = 0;
	k = 0;
	j = 0;
	if (little[0] == '\0')
		return ((char*)big);
	while (big[i] && little[j])
	{
		k = i;
		j = 0;
		while (big[k] == little[j])
		{
			if (little[j + 1] == '\0')
				return ((char*)big + i);
			k++;
			j++;
		}
		i++;
	}
	return (NULL);
}
