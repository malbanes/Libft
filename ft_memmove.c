/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbanes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 19:46:13 by malbanes          #+#    #+#             */
/*   Updated: 2016/11/21 14:34:59 by malbanes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*dst2;
	unsigned char	*src2;

	dst2 = (unsigned char*)dst;
	src2 = (unsigned char*)src;
	if (src2 >= dst2)
	{
		while (n--)
			*dst2++ = *src2++;
		return (dst);
	}
	else
	{
		dst2 = dst2 + n;
		src2 = src2 + n;
		while (n--)
			*--dst2 = *--src2;
		return (dst);
	}
}
