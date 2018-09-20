/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_sorted.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pragolan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 13:10:03 by pragolan          #+#    #+#             */
/*   Updated: 2018/08/28 17:02:50 by pragolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int		ft_check_sorted(t_a *a_ptr, t_b *b_ptr)
{
	int i;
	int j;

	i = 1;
	while (i <= a_ptr->last)
	{
		j = i;
		while (j > 0)
		{
			if (a_ptr->values[j] < a_ptr->values[j - 1])
				return (0);
			j--;
		}
		i++;
	}
	if (i == a_ptr->max_size && b_ptr->last == -1)
		return (1);
	else
		return (0);
}
