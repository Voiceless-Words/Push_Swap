/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pragolan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 15:45:41 by pragolan          #+#    #+#             */
/*   Updated: 2018/08/20 15:46:29 by pragolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_rotate_b(t_b *b_ptr)
{
	int i;
	int j;
	int *val;

	i = 0;
	j = 1;
	val = (int *)ft_memalloc(sizeof(int) * b_ptr->max_size);
	if (b_ptr->last >= 1)
	{
		while (i <= b_ptr->last)
		{
			val[i] = b_ptr->values[i];
			i++;
		}
		i = 0;
		while (i < b_ptr->last)
		{
			b_ptr->values[i] = val[j];
			i++;
			j++;
		}
		b_ptr->values[b_ptr->last] = val[0];
	}
	free(val);
}
