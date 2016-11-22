/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbanes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 11:12:06 by malbanes          #+#    #+#             */
/*   Updated: 2016/11/21 17:42:18 by malbanes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	cntc(int nb)
{
	int	c;
	int	div;

	c = 0;
	div = 1;
	if (nb < 0)
	{
		c++;
		nb = -nb;
	}
	while (nb / div >= 10)
	{
		c++;
		div = div * 10;
	}
	c++;
	return (c);
}

char		*ft_itoa(int n)
{
	char		*str;
	int			div;
	int			c;
	int			i;

	i = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	c = cntc(n);
	div = 1;
	if (n < 0 && (i += 1))
		n = -n;
	while ((n / div) >= 10)
		div = div * 10;
	if (!(str = (char*)malloc(sizeof(char) * c + 1)))
		return (NULL);
	if (i == 1)
		str[i - 1] = '-';
	while ((div) > 0)
	{
		str[i++] = ((n / div) % 10 + '0');
		div = div / 10;
	}
	str[i] = '\0';
	return (str);
}
