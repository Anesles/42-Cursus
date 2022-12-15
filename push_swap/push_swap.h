/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 15:39:30 by brumarti          #+#    #+#             */
/*   Updated: 2022/12/15 16:51:14 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"

typedef	struct s_stack
{
	int	*list;
	int	stack_size;
}	t_stack;

void	init(int argc, char **argv, t_stack *a, t_stack	*b);
void	print_stacks(t_stack a, t_stack b);
//Operations
void	sa(int *a);
void	sb(int *b);
void	ss(int *a, int *b);
void	pa(t_stack *a, t_stack *b);
void	pb(t_stack *a, t_stack *b);

#endif