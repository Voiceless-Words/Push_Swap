/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_evaluate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pragolan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 10:07:56 by pragolan          #+#    #+#             */
/*   Updated: 2018/08/30 10:50:56 by pragolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

static int		ft_check_dup(t_a *a_ptr)
{
	int i;
	int j;

	i = 0;
	while (i < a_ptr->max_size)
	{
		j = 0;
		while (j < a_ptr->max_size)
		{
			if (a_ptr->values[j] == a_ptr->values[i] && i != j)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

static int		ft_check_smallest(t_a *a_ptr)
{
	int i;
	int j;
	int small;

	small = a_ptr->values[0];
	i = 1;
	j = 0;
	while (i <= a_ptr->last)
	{
		if (a_ptr->values[i] < small)
		{
			small = a_ptr->values[i];
			j = i;
		}
		i++;
	}
	return (j);
}

void			ft_push_back(t_a *a_ptr, t_b *b_ptr)
{
	while (b_ptr->last >= 0)
	{
		ft_putendl("pa");
		ft_push_a(a_ptr, b_ptr);
	}
}

int				ft_evaluate(t_a *a_ptr, t_b *b_ptr)
{
	int s_indx;
	int small;

	if (ft_check_dup(a_ptr) == 0)
		return (2);
	if (ft_check_sorted_a(a_ptr) == 0)
	{
		while (ft_check_sorted_a(a_ptr) == 0)
		{
			s_indx = ft_check_smallest(a_ptr);
			small = a_ptr->values[s_indx];
			if (s_indx > (a_ptr->max_size / 2))
				ft_sort_behind(a_ptr, small);
			else
				ft_sort_front(a_ptr, b_ptr, small);
		}
		ft_push_back(a_ptr, b_ptr);
	}
	return (1);
}
