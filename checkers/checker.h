/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pragolan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 10:07:25 by pragolan          #+#    #+#             */
/*   Updated: 2018/08/30 11:30:45 by pragolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H
# include "libft/libft.h"
# include <stdio.h>

typedef struct		s_a
{
	int				*values;
	int				max_size;
	int				last;
}					t_a;

typedef struct		s_b
{
	int				*values;
	int				max_size;
	int				last;
}					t_b;

void				ft_init_ab(t_a *a_ptr, t_b *b_ptr, int size);
int					ft_check_sorted(t_a *a_ptr, t_b *b_ptr);
int					ft_evaluate(t_a *a_ptr, t_b *b_ptr);
void				ft_swap_a(t_a *a_ptr);
void				ft_swap_b(t_b *b_ptr);
void				ft_swap_ab(t_a *a_ptr, t_b *b_ptr);
void				ft_push_a(t_a *a_ptr, t_b *b_ptr);
void				ft_push_b(t_a *a_ptr, t_b *b_ptr);
void				ft_rotate_a(t_a *a_ptr);
void				ft_rotate_b(t_b *b_ptr);
void				ft_rotate_ab(t_a *a_ptr, t_b *b_ptr);
void				ft_rrotate_a(t_a *a_ptr);
void				ft_rrotate_b(t_b *b_ptr);
void				ft_rrotate_ab(t_a *a_ptr, t_b *b_ptr);
void				ft_free_stacks(t_a *a_ptr, t_b *b_ptr);

#endif
