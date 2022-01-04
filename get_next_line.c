/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 10:21:54 by creyt             #+#    #+#             */
/*   Updated: 2022/01/04 16:11:18 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_read(int fd, char **save)
{
	char	buffer[BUFFER_SIZE + 1];
	int		file;
	int		end;
	char	*temp;

	end = 0;
	if (!*save)
		*save = ft_strdup("");
	while (!ft_strchr(*save, '\n') && !end)
	{
		file = read(fd, buf, BUFFER_SIZE);
		buffer[file] 
}

char	*get_next_line(int fd)
{
	static char	*save;
	char		buf[BUF_SIZE + 1];

	while (save = read(fd, buf, BUF_SIZE))
	{
		buf[save] = '\0';
		ft_putstr(buf);
	}
}

int	main(void)
{
	int		fd;

	fd = open("test.txt", O_RDONLY);
	get_next_line(fd);
}
