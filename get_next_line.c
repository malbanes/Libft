/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbanes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/17 11:29:54 by malbanes          #+#    #+#             */
/*   Updated: 2017/02/16 15:31:35 by malbanes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		cherche_char_c(char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int		retour_get_next_line(t_struct *get, char ***line, char **s)
{
	if (ft_strlen(get->tmp) > 0)
	{
		**line = get->tmp;
		*s = NULL;
		return (1);
	}
	if (get->ret < 0)
		return (-1);
	**line = NULL;
	return (0);
}

int		get_next_line(const int fd, char **line)
{
	static char	*s[1000000] = {NULL};
	t_struct	get;

	if (fd < 0 || fd > 1000000 || !line)
		return (-1);
	if (s[fd] == NULL)
		s[fd] = ft_memalloc(BUFF_SIZE + 1);
	get.tmp = ft_strncpy(ft_memalloc(BUFF_SIZE + 1), s[fd], BUFF_SIZE);
	while (ft_strchr(get.tmp, '\n') == NULL)
	{
		if ((get.ret = read(fd, get.buff, BUFF_SIZE)) < 1)
			return (retour_get_next_line(&get, &line, &s[fd]));
		get.buff[get.ret] = '\0';
		get.tmp2 = ft_strjoin(get.tmp, get.buff);
		free(get.tmp);
		get.tmp = get.tmp2;
	}
	*line = ft_strsub(get.tmp, 0, cherche_char_c(get.tmp, '\n'));
	if (ft_strchr(get.tmp, '\n'))
		s[fd] = ft_strncpy(s[fd], ft_strchr(get.tmp, '\n') + 1,
				BUFF_SIZE + 1);
	free(get.tmp);
	return (1);
}
