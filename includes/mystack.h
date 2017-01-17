/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mystack.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzial <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/13 21:09:46 by amarzial          #+#    #+#             */
/*   Updated: 2017/01/17 12:05:28 by amarzial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef MYSTACK_H
# define MYSTACK_H
# include "libft.h"

typedef struct	s_stack
{
	t_list	*begin;
	t_list	*end;
}				t_stack;



t_stack	*stack_push(t_stack *stack, void *value, size_t size);
size_t	stack_size(t_stack *stack);
int		stack_is_sorted(t_stack *stack);
void	stack_clear(t_stack *stack);
void	*stack_pop(t_stack *stack);
void	stack_move(t_stack *dest, t_stack *src);
void	stack_rotate(t_stack *stack);
void	stack_rev_rotate(t_stack *stack);
void	stack_swap(t_stack *stack);

#endif
