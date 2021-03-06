/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbanes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 20:30:12 by malbanes          #+#    #+#             */
/*   Updated: 2016/11/20 21:29:56 by malbanes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		k;
	char	*cpy;

	k = 0;
	i = 0;
	j = 0;
	if (!(s1 && s2) || (!(s1 || s2)))
		return (NULL);
	if (!(cpy = (char*)malloc(sizeof(char) *
					(ft_strlen(s1) + ft_strlen(s2) + 1))))
		return (NULL);
	while (s1[i])
		cpy[k++] = s1[i++];
	while (s2[j])
		cpy[k++] = s2[j++];
	cpy[k] = '\0';
	return (cpy);
}
