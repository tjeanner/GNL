/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjeanner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 06:26:25 by tjeanner          #+#    #+#             */
/*   Updated: 2017/07/12 13:51:56 by tjeanner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		get_next_line(const int fd, char **line)
{
	char		*buf;
	static char	*rest = NULL;
	int			rd;
	int			pos;
//	int			state;

	if (rest)
		*line = ft_strdup(rest);
	if (!(buf = (char*)malloc(sizeof(char) * (BUFF_SIZE + 1))))
		return (-1);
	buf[BUFF_SIZE] = '\0';
//	if (read(fd, &buf, BUFF_SIZE) < 0)
//	if (read(fd, buf, BUFF_SIZE) < 0)
//		return (-1);
//	*line = ft_strsub(buf, 0, ft_strrchrindex(*line, EOL));
	rd = 1;
	pos = -1;
	if (*line)
		pos = ft_strchrindex(*line, '\n');
	while (pos == -1 && rd > 0)
	{
		if ((rd = (read(fd, buf, BUFF_SIZE))) < 0)
			return (-1);
		if (!*line)
			*line = ft_strdup(buf);
		else
			*line = ft_strjoin(*line, buf);
		pos = ft_strchrindex(*line, '\n');
	}
	if (rd <= 0)
	{
		if (rd == 0)
			*line = ft_strjoin(*line, buf);
		return (rd = (rd == 0) ? 0 : -1);
	}
	rest = ft_strsub(*line, pos + 1, ft_strlen(*line) - pos);
	*line = ft_strsub(*line, 0, pos);
	return (1);
}
