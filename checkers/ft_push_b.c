/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pragolan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 14:11:39 by pragolan          #+#    #+#             */
/*   Updated: 2018/08/20 15:29:08 by pragolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static void		ft_shift_down(t_b *b_ptr)
{
	int *val;
	int i;
	int j;

	i = 0;
	j = 1;
	val = (int *)ft_memalloc(sizeof(int) * b_ptr->max_size);
	while (i <= b_ptr->last)
	{
		val[i] = b_ptr->values[i];
		i++;
	}
	i = 0;
	while (j <= b_ptr->last + 1)
	{
		b_ptr->values[j] = val[i];
		i++;
		j++;
	}
	free(val);
}

static void		ft_shift_up(t_a *a_ptr)
{
	int *val;
	int i;
	int j;

	i = 0;
	j = 1;
	val = (int *)ft_memalloc(sizeof(int) * a_ptr->max_size);
	if (a_ptr->last == 0)
		return ;
	else
	{
		while (i <= a_ptr->last)
		{
			val[i] = a_ptr->values[i];
			i++;
		}
		i = 0;
		while (j <= a_ptr->last)
		{
			a_ptr->values[i] = val[j];
			i++;
			j++;
		}
	}
	free(val);
}

void			ft_push_b(t_a *a_ptr, t_b *b_ptr)
{
	if (b_ptr->last == -1)
		b_ptr->values = (int *)ft_memalloc(sizeof(int) * b_ptr->max_size);
	if (a_ptr->last != -1)
	{
		ft_shift_down(b_ptr);
		b_ptr->values[0] = a_ptr->values[0];
		ft_shift_up(a_ptr);
		a_ptr->last--;
		b_ptr->last++;
		if (a_ptr->last == -1)
			free(a_ptr->values);
	}
}
