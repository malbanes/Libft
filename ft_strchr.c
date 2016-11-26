/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbanes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 20:07:42 by malbanes          #+#    #+#             */
/*   Updated: 2016/11/26 13:59:10 by malbanes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	if ((char)c == '\0')
		return ((char*)s + ft_strlen(s));
	while (s[i] != (char)c)
	{
		if (s[i] == '\0')
			return (NULL);
		i++;
	}
	return ((char*)s + i);
}
