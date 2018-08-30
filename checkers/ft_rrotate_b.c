/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrotate_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pragolan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 16:03:11 by pragolan          #+#    #+#             */
/*   Updated: 2018/08/20 16:03:56 by pragolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_rrotate_b(t_b *b_ptr)
{
	int i;
	int j;
	int *val;

	i = 0;
	j = 1;
	if (b_ptr->last >= 1)
	{
		val = (int *)ft_memalloc(sizeof(int) * b_ptr->max_size);
		while (i <= b_ptr->last)
		{
			val[i] = b_ptr->values[i];
			i++;
		}
		i = 0;
		while (j <= b_ptr->last)
		{
			b_ptr->values[j] = val[i];
			i++;
			j++;
		}
		b_ptr->values[0] = val[i];
		free(val);
	}
}
