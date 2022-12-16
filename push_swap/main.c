/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 15:38:57 by brumarti          #+#    #+#             */
/*   Updated: 2022/12/16 15:35:40 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char *argv[])
{
	t_stack	a;
	t_stack	b;

	if (argc > 1)
	{
		init(argc, argv, &a, &b);
		print_stacks(a, b);
		sa(a.list);
		print_stacks(a, b);
		pb(&a, &b);
		print_stacks(a, b);
		pb(&a, &b);
		print_stacks(a, b);
		rra(&a);
		print_stacks(a, b);
		rb(&b);
		print_stacks(a, b);
	}
	return 0;
}
