/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lltoa_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 19:19:45 by rshin             #+#    #+#             */
/*   Updated: 2025/03/03 22:49:33 by rshin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libstr.h"

static size_t	ft_count_nbr(long long n, size_t div)
{
	size_t	count;

	count = 0;
	if (n < 0)
	{
		count++;
		n = -n;
	}
	while (n > 0)
	{
		count++;
		n /= div;
	}
	return (count);
}

char	*ft_lltoa_base(long long nbr, char *base)
{
	char	*dst;
	size_t	count;
	size_t	div;

	div = ft_strlen(base);
	if (nbr == LLONG_MIN)
		return (ft_strdup("-9223372036854775808"));
	if (nbr == 0)
		return (ft_strdup("0"));
	count = ft_count_nbr(nbr, div);
	dst = ft_calloc((count + 1), sizeof(char));
	if (dst == NULL)
		return (NULL);
	if (nbr < 0)
	{
		nbr = -nbr;
		dst[0] = '-';
	}
	while (nbr > 0)
	{
		dst[--count] = base[nbr % div];
		nbr /= div;
	}
	return (dst);
}
