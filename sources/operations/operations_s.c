/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_s.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emeinert <emeinert@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 16:18:01 by emeinert          #+#    #+#             */
/*   Updated: 2023/11/08 13:59:34 by emeinert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/pushswap.h"

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sa(t_data *data)
{
	if (!data->stack_a)
		return ;
	ft_swap(&data->stack_a[0], &data->stack_a[1]);
	ft_printf("sa\n");
}

void	ft_sb(t_datab *data_b)
{
	if (!data_b->stack_b)
		return ;
	ft_swap(&data_b->stack_b[0], &data_b->stack_b[1]);
	ft_printf("sb\n");
}
