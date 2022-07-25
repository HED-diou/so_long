/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 20:02:24 by hed-diou          #+#    #+#             */
/*   Updated: 2022/02/06 20:08:35 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_strlen(char *str)
{
	int	a;

	a = 0;
	if (str == NULL)
		return (0);
	while (str[a])
		a++;
	return (a);
}

void	ft_realloc(char **str, int size)
{
	char	*p;
	int		a;
	int		len;

	a = 0;
	len = ft_strlen(*str) + 1;
	p = malloc(len + size + 1);
	if (!p)
		return ;
	while (*str && (*str)[a])
	{
		p[a] = (*str)[a];
		a++;
	}
	while (a < len + size)
		p[a++] = '\0';
	free(*str);
	*str = malloc(len + size + 1);
	a = -1;
	while (++a < len + size)
		(*str)[a] = p[a];
	free(p);
}

int	read_map(int fd, char **str)
{
	int	index;
	int	s;

	index = 1;
	s = 0;
	while (index != 0)
	{
		ft_realloc(str, 1);
		index = read(fd, (*str + s), 1);
		s++;
	}
	return (s);
}
