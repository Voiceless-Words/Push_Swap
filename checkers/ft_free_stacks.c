/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_stacks.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pragolan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 11:27:15 by pragolan          #+#    #+#             */
/*   Updated: 2018/08/30 12:10:52 by pragolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_free_stacks(t_a *a_ptr, t_b *b_ptr)
{
	if (b_ptr->last >= 0)
		free(b_ptr->values);
	if (a_ptr->last >= 0)
		free(a_ptr->values);
}
