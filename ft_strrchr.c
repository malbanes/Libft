/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbanes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 20:09:13 by malbanes          #+#    #+#             */
/*   Updated: 2016/11/23 17:10:52 by malbanes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s1, int c)
{
	int i;

	i = ft_strlen(s1);
	if (c == '\0')
		return ((char*)(s + i + 1));
	while (s1[i] != c)
	{
		if (s1[i] == s1[0])
			return (NULL);
		i--;
	}
	return ((char*)&s1[i]);
}
