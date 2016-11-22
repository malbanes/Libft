/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbanes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 15:22:50 by malbanes          #+#    #+#             */
/*   Updated: 2016/11/22 17:04:20 by malbanes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

static	int	ft_strcmp(char const *big, const char *lit, unsigned int lenb, unsigned int lenl)
{
	unsigned int i;

	i = 0;
	while((unsigned int)*(big + i) == (unsigned int)*(lit + i) && (i + 4) <= lenb && (i + 4) <= lenl)
		i = i + 4;
	while((unsigned char)big[i] && (unsigned char)lit[i] && big[i] == lit[i])
		i++;
	return ((unsigned char)lit[i] == '\0' ? 1 : 0);
}

char	*ft_strnstr(const char *big, const char *lit, size_t len)
{
	int	i;

	i = 0;
	while (big[i] && i < len)
{
	if (ft_strcmp(*(big + i), lit, ft_strlen(big) + 1, ft_strlen(lit) + 1) == 1)
		
	i++;
}

int	main(int ac, char **av)
{
	printf("%s", ft_strnstr(av[1], av[2], 15));
	return (0);
}
