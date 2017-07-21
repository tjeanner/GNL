/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjeanner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 09:14:28 by tjeanner          #+#    #+#             */
/*   Updated: 2017/07/21 06:02:38 by tjeanner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
//# define BUFF_SIZE 8385063//ca segfault pas
//# define BUFF_SIZE 8385064//ca segfault
# define BUFF_SIZE 1
# define EOL '\n'

# include "libft/libft.h"
# include <stdlib.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <string.h>
# include <fcntl.h>

typedef struct		fd_infoo
{
	int				fd;
	char			rest[BUFF_SIZE];
}					fd_info;

int		get_next_line(const int fd, char **line);

#endif
