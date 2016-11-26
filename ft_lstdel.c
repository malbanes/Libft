/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbanes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 20:43:15 by malbanes          #+#    #+#             */
/*   Updated: 2016/11/21 16:14:19 by malbanes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	t_list *s;

	if (!(alst) || !del)
		return ;
	while ((*alst) != NULL)
	{
		s = (*alst)->next;
		del((*alst)->content, (*alst)->content_size);
		free((*alst));
		(*alst) = s;
	}
	*alst = NULL;
}
