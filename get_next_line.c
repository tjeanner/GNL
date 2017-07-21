/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjeanner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 15:39:33 by tjeanner          #+#    #+#             */
/*   Updated: 2017/07/21 05:58:47 by tjeanner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		ft_strjoin_f(char **s1, char *s2)
{
	char	*tmp;

	if (*s1 && !s2)
		free(*s1);
	else if (s2)
	{
		if (*s1)
		{
			if (!(tmp = ft_strdup(*s1)))
				return (0);
			free(*s1);
			if (!(*s1 = ft_strjoin(tmp, s2)))
				return (0);
			free(tmp);
		}
		else
		{
//			free (*s1);
			*s1 = ft_strdup(s2);
		}
	}
	else
		return (0);
	return (1);
}

t_list	*ft_getrest(t_list *t_first, int current_fd)
{
	t_list	*tmp;

	tmp = NULL;
	if (!t_first)
		return (NULL);
	tmp = t_first;
	while (tmp && tmp->next &&
			((fd_info *)tmp->content)->fd != current_fd)
		tmp = tmp->next;
	if (((fd_info *)tmp->content)->fd == current_fd)
		return (tmp);
	return (NULL);
}

t_list	*ft_makerest(t_list *t_first, int curr_fd, char *rest)
{
	t_list	*tmp;
	fd_info	*new_content;

	new_content = NULL;
	tmp = (t_first)? t_first: NULL;
	while (tmp && tmp->next &&
			((fd_info *)tmp->content)->fd != curr_fd)
		tmp = tmp->next;
//	if (tmp->next && ((fd_info *)tmp->next->content)->fd == curr_fd)
//		tmp = tmp->next;
	if (tmp && ((fd_info *)tmp->content)->fd == curr_fd)
		ft_strcpy(((fd_info *)tmp->content)->rest, rest);
	else
	{
		if (!(new_content = (fd_info *)malloc(sizeof(fd_info))))
			return (NULL);
		new_content->fd = curr_fd;
		ft_strcpy(new_content->rest, rest);
		if (!t_first)
		{
			tmp = ft_lstnew(new_content, sizeof(fd_info));
			//t_first = ft_lstnew(new_content, sizeof(fd_info));
			t_first = tmp;
		}
		else
		{
		//	ft_lstadd(&t_first, tmp);
			if (t_first->next == NULL)
				t_first->next = ft_lstnew(new_content, sizeof(fd_info));
			else
				tmp->next = ft_lstnew(new_content, sizeof(fd_info));
		}
//		t_first = tmp;
		free(new_content);
	}
	return (t_first);
}

int		get_next_line(const int fd, char **line)
{
	static t_list	*t_first = NULL;
	t_list			*t_curr;
	char			buf[BUFF_SIZE + 1];
	int				rd;
	char			*pos;

	t_curr = NULL;
	if (*line)
		free(*line);
	*line = NULL;
	rd = BUFF_SIZE;
	if ((t_curr = ft_getrest(t_first, fd)))
		*line = ft_strdup(((fd_info *)t_curr->content)->rest);
	pos = (*line)? ft_strchr(*line, EOL): NULL;
	while (!pos && rd == BUFF_SIZE)
	{
		if ((rd = read(fd, buf, BUFF_SIZE)) < 1)
			return (rd = (rd == 0)? 0: -1);
		buf[rd] = '\0';
		ft_strjoin_f(line, buf);
		pos = ft_strchr(*line, EOL);
	}
	if (pos)
	{
		t_first = ft_makerest(t_first, fd, (pos + 1));
		*pos = '\0';
	}
	return (1);
}
