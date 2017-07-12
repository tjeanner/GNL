/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordpos.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjeanner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/14 14:18:36 by tjeanner          #+#    #+#             */
/*   Updated: 2017/01/14 19:01:06 by tjeanner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		*ft_wordpos(char *s, int word, char c)
{
	int		i;
	int		pos;
	int		len;
	int		res[2];

	i = 0;
	pos = 0;
	while (s[i] == c)
		i++;
	while (pos < word && s[i] && word > 0)
	{
		while (!(s[i] != c && (s[i - 1] == c || i == 0)) && s[i])
			i++;
		pos++;
		i++;
	}
	if (pos == word && word > 0)
		return (i - 1);
	else
		return (-1);
}
