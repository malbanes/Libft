/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbanes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 19:59:41 by malbanes          #+#    #+#             */
/*   Updated: 2016/11/20 21:30:51 by malbanes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlen(const char *str)
{
	size_t			len;
	unsigned char	*str2;

	str2 = (unsigned char*)str;
	len = 0;
	while (str2[len])
		len++;
	return (len);
}
