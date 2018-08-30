/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_front.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pragolan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 14:04:37 by pragolan          #+#    #+#             */
/*   Updated: 2018/08/30 12:04:20 by pragolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

void	ft_sort_front(t_a *a_ptr, t_b *b_ptr, int small)
{
	if (a_ptr->max_size > 1)
	{
		if (a_ptr->values[0] == small && a_ptr->last > 2)
		{
			ft_putendl("pb");
			ft_push_b(a_ptr, b_ptr);
			return ;
		}
		while (a_ptr->values[1] != small && a_ptr->values[0] != small)
		{
			ft_putendl("ra");
			ft_rotate_a(a_ptr);
		}
		if (a_ptr->values[0] > a_ptr->values[a_ptr->last])
		{
			ft_putendl("ra");
			ft_rotate_a(a_ptr);
		}
		else if (!ft_check_sorted_a(a_ptr))
		{
			ft_putendl("sa");
			ft_swap_a(a_ptr);
		}
	}
}
