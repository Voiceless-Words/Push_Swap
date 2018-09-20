/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrotate_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pragolan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 15:55:00 by pragolan          #+#    #+#             */
/*   Updated: 2018/08/20 16:02:38 by pragolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_rrotate_a(t_a *a_ptr)
{
	int i;
	int j;
	int *val;

	i = 0;
	j = 1;
	if (a_ptr->last >= 1)
	{
		val = (int *)ft_memalloc(sizeof(int) * a_ptr->max_size);
		while (i <= a_ptr->last)
		{
			val[i] = a_ptr->values[i];
			i++;
		}
		i = 0;
		while (j <= a_ptr->last)
		{
			a_ptr->values[j] = val[i];
			i++;
			j++;
		}
		a_ptr->values[0] = val[i];
		free(val);
	}
}
