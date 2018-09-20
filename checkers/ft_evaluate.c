/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_evaluate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pragolan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 10:07:56 by pragolan          #+#    #+#             */
/*   Updated: 2018/08/21 15:09:41 by pragolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static int		ft_rules(t_a *a_ptr, t_b *b_ptr, char *line)
{
	if ((ft_strcmp(line, "sa") == 0))
		ft_swap_a(a_ptr);
	else if ((ft_strcmp(line, "sb") == 0))
		ft_swap_b(b_ptr);
	else if ((ft_strcmp(line, "ss") == 0))
		ft_swap_ab(a_ptr, b_ptr);
	else if ((ft_strcmp(line, "pa") == 0))
		ft_push_a(a_ptr, b_ptr);
	else if ((ft_strcmp(line, "pb") == 0))
		ft_push_b(a_ptr, b_ptr);
	else if ((ft_strcmp(line, "ra") == 0))
		ft_rotate_a(a_ptr);
	else if ((ft_strcmp(line, "rb") == 0))
		ft_rotate_b(b_ptr);
	else if ((ft_strcmp(line, "rr") == 0))
		ft_rotate_ab(a_ptr, b_ptr);
	else if ((ft_strcmp(line, "rra") == 0))
		ft_rrotate_a(a_ptr);
	else if ((ft_strcmp(line, "rrb") == 0))
		ft_rrotate_b(b_ptr);
	else if ((ft_strcmp(line, "rrr") == 0))
		ft_rrotate_ab(a_ptr, b_ptr);
	else
		return (0);
	return (1);
}

static int		ft_check_dup(t_a *a_ptr)
{
	int i;
	int j;

	j = 0;
	while (j < a_ptr->max_size)
	{
		i = 0;
		while (i < a_ptr->max_size)
		{
			if (a_ptr->values[j] == a_ptr->values[i] && i != j)
				return (0);
			i++;
		}
		j++;
	}
	return (1);
}

int				ft_evaluate(t_a *a_ptr, t_b *b_ptr)
{
	char	*line;
	int		fd;

	if (ft_check_dup(a_ptr) == 0)
		return (2);
	fd = 0;
	while (get_next_line(fd, &line))
	{
		if ((ft_rules(a_ptr, b_ptr, line) == 0))
			return (2);
		free(line);
	}
	if (ft_check_sorted(a_ptr, b_ptr))
		return (1);
	else
		return (0);
}
