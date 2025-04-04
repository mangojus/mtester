/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 09:03:36 by rshin             #+#    #+#             */
/*   Updated: 2025/02/03 19:11:44 by rshin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long	ft_sqrt(long nbr)
{
	long	x;

	x = 0;
	if (nbr == 1)
		return (1);
	while (nbr != x * x && x < nbr / 2)
		x++;
	if (nbr == x * x)
		return (x);
	return (0);
}
