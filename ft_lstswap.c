/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstswap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbanes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 10:50:10 by malbanes          #+#    #+#             */
/*   Updated: 2016/11/25 14:15:57 by malbanes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstswap(t_list *lst, int m1, int m2)
{
	t_list	*tmp;
	t_list	*ma1;
	t_list	*ma2;
	t_list	*mb1;
	t_list	*mb2;

	if (!lst)
		return ;
	ma1 = ft_lstnptr(lst, m1);
	ma2 = ft_lstnptr(lst, m1 - 1);
	mb1 = ft_lstnptr(lst, m2);
	mb2 = ft_lstnptr(lst, m2 - 1);
	tmp = ma1->next;
	ma1->next = mb1->next;
	mb1->next = tmp;
	tmp = ma2->next;
	ma2->next = mb2->next;
	mb2->next = tmp;
}
