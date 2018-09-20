/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pragolan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 12:29:35 by pragolan          #+#    #+#             */
/*   Updated: 2018/08/30 10:50:40 by pragolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_H
# define PUSH_H
# include "../checkers/checker.h"

int		ft_check_sorted_a(t_a *a_ptr);
void	ft_sort_behind(t_a *a_ptr, int small);
void	ft_sort_front(t_a *ptr, t_b *b_ptr, int small);
#endif
