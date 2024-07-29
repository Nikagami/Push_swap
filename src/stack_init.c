/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aafounas <aafounas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 15:01:02 by aafounas          #+#    #+#             */
/*   Updated: 2024/07/29 16:38:25 by aafounas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	stack_init(t_stack	**stack_a, char **av, int ac)
{
	int	i;

	i = 0;
	if (ac != 2)
		i = 1;
	while (av[i])
	{
		append_node(stack_a, ft_atoi(av[i]));
		++i;
	}
}
