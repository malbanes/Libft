/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbanes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 20:05:21 by malbanes          #+#    #+#             */
/*   Updated: 2016/11/26 11:57:31 by malbanes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_end;
	size_t	m;

	i = 0;
	m = 0;
	while (dst[i] && i < size)
		i++;
	dst_end = i;
	while (src[m] && i < size - 1)
		dst[i++] = src[m++];
	if (i < size)
		dst[i] = '\0';
	return (dst_end + ft_strlen(src));
}
