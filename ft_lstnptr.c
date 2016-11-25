/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnptr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbanes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 13:06:36 by malbanes          #+#    #+#             */
/*   Updated: 2016/11/25 14:19:22 by malbanes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnptr(t_list *lst, int len)
{
	t_list	*lst2;
	t_list	*ptr;

	if (!lst)
		return (NULL);
	lst2 = lst;
	while (lst2->next != NULL && len--)
	{
		if (len == 1)
		{
			ptr = lst2->next;
			return (ptr);
		}
		lst2 = lst2->next;
	}
	return (NULL);
}
