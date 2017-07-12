/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjeanner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/09 12:00:38 by tjeanner          #+#    #+#             */
/*   Updated: 2017/07/10 00:36:26 by tjeanner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *smll, size_t len)
{
	int pos;
	int i;

	pos = 0;
	if (ft_strlen(smll) == 0)
		return ((char*)&big[0]);
	while (pos < (int)ft_strlen(big) && (char*)smll && pos < (int)len)
	{
		while (big[pos] != smll[0] && big[pos] && pos < (int)len)
			pos++;
		i = 0;
		while (big[pos + i] == smll[i] && smll[i] && pos + i < (int)len)
			i++;
		if (!smll[i])
			return ((char*)&big[pos]);
		else
			pos = pos + 1;
	}
	return (NULL);
}
