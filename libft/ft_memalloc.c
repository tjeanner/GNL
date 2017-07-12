/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjeanner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/09 02:47:03 by tjeanner          #+#    #+#             */
/*   Updated: 2017/01/10 18:00:47 by tjeanner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	int		i;
	void	*mem;

	i = 0;
	mem = malloc(size);
	if (!(mem))
		return (NULL);
	mem = ft_memset(mem, 0, size);
	return (mem);
}
