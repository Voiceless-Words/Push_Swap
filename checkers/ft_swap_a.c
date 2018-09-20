/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pragolan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 13:09:08 by pragolan          #+#    #+#             */
/*   Updated: 2018/08/20 13:13:49 by pragolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_swap_a(t_a *a_ptr)
{
	int temp;
	int i;

	temp = 0;
	i = 0;
	if (a_ptr->last >= 1)
	{
		temp = a_ptr->values[i];
		a_ptr->values[i] = a_ptr->values[i + 1];
		a_ptr->values[i + 1] = temp;
	}
}
