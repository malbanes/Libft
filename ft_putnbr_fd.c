/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbanes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 20:40:00 by malbanes          #+#    #+#             */
/*   Updated: 2016/11/22 20:11:44 by malbanes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int div;

	div = 1;
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	while ((n / div) >= 10)
		div *= 10;
	while (div > 0)
	{
		ft_putchar_fd((n / div) % 10 + '0', fd);
		div /= 10;
	}
}

int		main()
{
	ft_putnbr_fd(01-156-1230102032147483647-2147483648, 0);
	return (0);
}
