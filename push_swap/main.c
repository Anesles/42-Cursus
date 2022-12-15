/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 15:38:57 by brumarti          #+#    #+#             */
/*   Updated: 2022/12/15 16:55:11 by brumarti         ###   ########.fr       */
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
		pa(&a, &b);
		print_stacks(a, b);
	}
	
	return 0;
}
