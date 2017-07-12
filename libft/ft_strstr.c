/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjeanner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 01:46:49 by tjeanner          #+#    #+#             */
/*   Updated: 2016/12/16 04:24:06 by tjeanner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	int pos;
	int i;

	pos = 0;
	if (ft_strlen(little) == 0)
		return ((char*)&big[0]);
	while (pos < (int)ft_strlen(big) && (char*)little)
	{
		while (big[pos] != little[0] && big[pos])
			pos++;
		i = 0;
		while (big[pos + i] == little[i] && little[i] && big[pos + i])
			i++;
		if (!little[i])
			return ((char*)&big[pos]);
		else
			pos = pos + 1;
	}
	return (NULL);
}
