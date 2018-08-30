/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pragolan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 15:03:37 by pragolan          #+#    #+#             */
/*   Updated: 2018/08/21 12:47:43 by pragolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static void		ft_shift_down(t_a *a_ptr)
{
	int i;
	int j;
	int *val;

	i = 0;
	j = 1;
	if (a_ptr->last == -1)
		return ;
	else
	{
		val = (int *)ft_memalloc(sizeof(int) * a_ptr->max_size);
		while (i <= a_ptr->last)
		{
			val[i] = a_ptr->values[i];
			i++;
		}
		i = 0;
		while (j <= a_ptr->last + 1)
		{
			a_ptr->values[j] = val[i];
			i++;
			j++;
		}
	}
	free(val);
}

static void		ft_shift_up(t_b *b_ptr)
{
	int i;
	int j;
	int *val;

	i = 0;
	j = 1;
	if (b_ptr->last == 0)
		return ;
	else
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
			b_ptr->values[i] = val[j];
			i++;
			j++;
		}
	}
	free(val);
}

void			ft_push_a(t_a *a_ptr, t_b *b_ptr)
{
	if (b_ptr->last != -1)
	{
		if (a_ptr->last == -1)
			a_ptr->values = (int *)ft_memalloc(sizeof(int) * a_ptr->max_size);
		ft_shift_down(a_ptr);
		a_ptr->values[0] = b_ptr->values[0];
		ft_shift_up(b_ptr);
		a_ptr->last++;
		b_ptr->last--;
		if (b_ptr->last == -1)
			free(b_ptr->values);
	}
}
