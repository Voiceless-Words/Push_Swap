/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pragolan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 13:14:37 by pragolan          #+#    #+#             */
/*   Updated: 2018/08/20 13:15:30 by pragolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_swap_b(t_b *b_ptr)
{
	int temp;
	int i;

	temp = 0;
	i = 0;
	if (b_ptr->last >= 1)
	{
		temp = b_ptr->values[i];
		b_ptr->values[i] = b_ptr->values[i + 1];
		b_ptr->values[i + 1] = temp;
	}
}
