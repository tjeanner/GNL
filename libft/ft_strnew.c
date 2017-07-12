/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjeanner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/09 05:23:01 by tjeanner          #+#    #+#             */
/*   Updated: 2017/01/12 13:09:42 by tjeanner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	int		i;
	char	*mem;

	i = 0;
	mem = (char*)malloc(size + 1);
	if (!(mem))
		return (NULL);
	mem = ft_memset(mem, 0, size + 1);
	return (mem);
}
