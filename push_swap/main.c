/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 15:38:57 by brumarti          #+#    #+#             */
/*   Updated: 2022/12/16 17:12:29 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	check_sorted(t_stack *a)
{
	int	i;

	i = 0;
	while (i < a->stack_size - 1)
	{
		if (a->list[i] > a->list[i + 1])
			return (0);
		i++;
	}
	return (1);
}

int	main(int argc, char *argv[])
{
	t_stack	a;
	t_stack	b;

	if (argc > 1)
	{
		init(argc, argv, &a, &b);
		if (check_sorted(&a))
			return (0);
		if (a.stack_size == 3)
			short_stack(&a);
		print_stacks(a, b);
		if (check_sorted(&a))
			return (0);
	}
	return (0);
}
