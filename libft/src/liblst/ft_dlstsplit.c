/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstlast.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 13:09:40 by rshin             #+#    #+#             */
/*   Updated: 2025/02/03 14:53:27 by rshin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liblst.h"

void	ft_dlstsplit(t_dlst *l1, t_dlst *l2)
{
	if (!l1 || !l2)
		return ;
	if (l1 == l2->prev)
	{
		l1->next = NULL;
		l2->prev = NULL;
	}
	else if (l1 == l2->next)
	{
		l1->prev = NULL;
		l2->next = NULL;
	}
}
