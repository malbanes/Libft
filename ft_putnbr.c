/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbanes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 20:33:33 by malbanes          #+#    #+#             */
/*   Updated: 2016/11/21 13:15:47 by malbanes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	long int div;
	long int nb;

	div = 1;
	nb = n;
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	while ((nb / div) >= 10)
		div *= 10;
	while (div > 0)
	{
		ft_putchar((nb / div) % 10 + 48);
		div /= 10;
	}
}
