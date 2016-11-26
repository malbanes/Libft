/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbanes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 20:44:22 by malbanes          #+#    #+#             */
/*   Updated: 2016/11/25 16:09:29 by malbanes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	lstlen(t_list *lst)
{
	size_t	len;
	t_list	*lst2;

	lst2 = lst;
	len = 0;
	while (lst2 != NULL && len++)
		lst2 = lst2->next;
	return (len);
}

t_list			*ft_lstmap(t_list *lst, t_list *(*f) (t_list *elem))
{
	t_list *new;

	new = NULL;
	while (lst != NULL)
	{
		if (!(new = (t_list*)malloc(lstlen(lst) * sizeof(t_list))))
			return (NULL);
		new = f(lst);
		new->next = ft_lstmap(lst->next, f);
		return (new);
	}
	return (NULL);
}
