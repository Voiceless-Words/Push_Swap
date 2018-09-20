/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_ab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pragolan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 11:00:32 by pragolan          #+#    #+#             */
/*   Updated: 2018/08/20 13:35:28 by pragolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_init_ab(t_a *a_ptr, t_b *b_ptr, int size)
{
	a_ptr->max_size = size;
	b_ptr->max_size = size;
	a_ptr->last = -1;
	b_ptr->last = -1;
}
