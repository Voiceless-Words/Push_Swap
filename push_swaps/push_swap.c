/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pragolan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 10:48:51 by pragolan          #+#    #+#             */
/*   Updated: 2018/08/30 12:23:06 by pragolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

static void		ft_free(char **str)
{
	int i;

	i = 0;
	while (str[i])
		free(str[i++]);
	free(str[i]);
	free(str);
}

static int		ft_compare(int k, char *str)
{
	char *temp;

	temp = NULL;
	temp = ft_itoa(k);
	if (ft_strcmp(temp, str) != 0)
	{
		free(temp);
		return (1);
	}
	free(temp);
	return (0);
}

static int		ft_rtn_size(int c, char **arg)
{
	int		i;
	int		j;
	int		k;
	char	**str;
	int		size;

	size = 0;
	k = 0;
	i = 1;
	while (i < c)
	{
		str = ft_strsplit(arg[i], ' ');
		j = 0;
		while (str[j])
		{
			k = ft_atoi(str[j]);
			if (ft_compare(k, str[j]))
				return (0);
			j++;
			size++;
		}
		ft_free(str);
		i++;
	}
	return (size);
}

static int		ft_assign_array(int c, char **arg, t_a *a_ptr)
{
	int		i;
	int		j;
	int		k;
	char	**str;

	k = 0;
	i = 1;
	a_ptr->values = (int *)ft_memalloc(sizeof(int) * a_ptr->max_size);
	while (i < c)
	{
		str = ft_strsplit(arg[i], ' ');
		j = 0;
		while (str[j])
		{
			a_ptr->values[k] = ft_atoi(str[j]);
			if (ft_compare(a_ptr->values[k], str[j]))
				return (0);
			k++;
			j++;
		}
		ft_free(str);
		i++;
	}
	return (1);
}

int				main(int c, char **arg)
{
	t_a a_ptr;
	t_b b_ptr;
	int size;
	int i;

	i = 0;
	if ((size = ft_rtn_size(c, arg)))
	{
		ft_init_ab(&a_ptr, &b_ptr, size);
		if (ft_assign_array(c, arg, &a_ptr))
		{
			a_ptr.last = a_ptr.max_size - 1;
			i = ft_evaluate(&a_ptr, &b_ptr);
		}
		else
			i = 2;
		if (i == 2)
			write(2, "Error\n", 6);
	}
	else
		write(2, "Error\n", 6);
	ft_free_stacks(&a_ptr, &b_ptr);
	return (0);
}
