/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aafounas <aafounas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 18:17:02 by aafounas          #+#    #+#             */
/*   Updated: 2024/07/29 16:39:00 by aafounas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(int value, t_stack **stack)
{
	t_stack	*new;

	new = malloc(sizeof(t_stack));
	if (new)
	{
		new->value = value;
		new->next = *stack;
		new->previous = NULL;
		if (*stack)
			(*stack)->previous = new;
		*stack = new;
	}
}

void	swap(int value, t_stack **stack)
{
	t_stack	*first;
	t_stack	*second;

	if (!stack || !(*stack) || !(*stack)->next)
		return ;
	first->next = second->next;
	if (second->next)
		second->next->previous = first;
	second->next = first;
	second->previous = first->previous;
	first->previous = second;
	*stack = second;
}

void	rotate(int value, t_stack **stack)
{
	t_stack	*first;
	t_stack	*last;

	if (!stack || !(*stack || !(*stack)->next))
		return ;
	*first = *stack;
	*last = *stack;
	while (last->next)
		last = last->next;
	*stack = first->next;
	(*stack)->previous = NULL;
	first->next = NULL;
	first->previous = last;
	last->next = first;
}

void	rev_rotate(int value, t_stack **stack)
{
	t_stack	*first;
	t_stack	*last;

	if (!stack || !(*stack || !(*stack)->next))
		return ;
	*first = *stack;
	*last = *stack;
	while (last->next)
		last = last->next;
	last->previous->next = NULL;
	last->next = first;
	last->previous = NULL;
	first->previous = last;
	*stack = last;
}
