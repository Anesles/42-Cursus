/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 15:38:57 by brumarti          #+#    #+#             */
/*   Updated: 2022/12/14 16:33:34 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char const *argv[])
{
	int		i;
	t_list	*stack_a;
	t_list	*stack_b;
	t_list	*temp;
	int		*x;

	x =	malloc(sizeof(int));
	i = -1;
	if (argc > 1)
	{
		while (++i < (argc - 1))
		{
			*x = ft_atoi(argv[i + 1]);
			temp = ft_lstnew(x);
			ft_lstadd_back(&stack_a, temp);
			temp = ft_lstnew(NULL);
			ft_lstadd_back(&stack_b, temp);
		}
	}
	return 0;
}
