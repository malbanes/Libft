/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbanes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 20:35:45 by malbanes          #+#    #+#             */
/*   Updated: 2016/11/20 20:39:37 by malbanes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	char *s1;

	s1 = (char*)s;
	if (!s)
		return ;
	if (*s)
	{
		ft_putstr_fd(s1++, fd);
		ft_putchar_fd('\n', fd);
	}
}
