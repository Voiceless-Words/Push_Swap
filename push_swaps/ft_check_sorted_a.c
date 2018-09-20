/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_sorted_a.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pragolan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 16:44:30 by pragolan          #+#    #+#             */
/*   Updated: 2018/08/30 10:50:13 by pragolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

int		ft_check_sorted_a(t_a *a_ptr)
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
	if (i == a_ptr->last + 1)
		return (1);
	else
		return (0);
}
