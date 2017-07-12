/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjeanner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 00:02:27 by tjeanner          #+#    #+#             */
/*   Updated: 2017/01/25 08:42:49 by tjeanner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		size;
	int		sign;
	char	*s;
	int		i;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	sign = (n < 0) ? 1 : 0;
	n = (n < 0) ? -n : n;
	size = ft_countdigit(n) + 1 + sign;
	if (!(s = (char*)malloc(size)))
		return (NULL);
	s[0] = '-';
	i = (sign == 1) ? 0 : -1;
	while (++i < size - 1)
	{
		sign = ft_power(10, (size - i - 2));
		if (n >= 10)
			s[i] = n / sign + '0';
		else
			s[i] = (i <= size - 3) ? '0' : n + '0';
		n = (n < 10) ? n : n % sign;
	}
	s[i] = '\0';
	return (s);
}
