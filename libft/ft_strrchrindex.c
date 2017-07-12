/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchrindex.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjeanner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/06 09:14:11 by tjeanner          #+#    #+#             */
/*   Updated: 2017/02/06 09:15:21 by tjeanner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strrchrindex(const char *s, int c)
{
	int i;

	i = ft_strlen(s);
	while (i >= 0 && s[i] != c)
		i--;
	if (s[i] == c)
		return (i);
	else
		return (-1);
}
