/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_behind.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pragolan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 12:10:29 by pragolan          #+#    #+#             */
/*   Updated: 2018/08/30 12:03:44 by pragolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

void	ft_sort_behind(t_a *a_ptr, int small)
{
	while (a_ptr->values[0] != small)
	{
		if (a_ptr->values[0] > a_ptr->values[1]\
				&& small != a_ptr->values[a_ptr->last])
		{
			ft_putendl("sa");
			ft_swap_a(a_ptr);
		}
		ft_putendl("rra");
		ft_rrotate_a(a_ptr);
	}
}
