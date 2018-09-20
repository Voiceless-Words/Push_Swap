/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pragolan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 15:32:58 by pragolan          #+#    #+#             */
/*   Updated: 2018/08/20 16:20:54 by pragolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_rotate_a(t_a *a_ptr)
{
	int i;
	int j;
	int *val;

	i = 0;
	j = 1;
	val = (int *)ft_memalloc(sizeof(int) * a_ptr->max_size);
	if (a_ptr->last >= 1)
	{
		while (i <= a_ptr->last)
		{
			val[i] = a_ptr->values[i];
			i++;
		}
		i = 0;
		while (i < a_ptr->last)
		{
			a_ptr->values[i] = val[j];
			i++;
			j++;
		}
		a_ptr->values[a_ptr->last] = val[0];
	}
	free(val);
}
