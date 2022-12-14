/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 15:38:57 by brumarti          #+#    #+#             */
/*   Updated: 2022/12/14 17:42:50 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char const *argv[])
{
	int		i;
	t_list	*stack_a;
	t_list	*stack_b;
	t_list	*temp;

	if (argc > 1)
	{
		stack_a = ft_lstnew((char *)argv[1]);
		stack_b = ft_lstnew(NULL);
		i = 1;
		while (i < argc - 1)
		{
			ft_lstadd_back(&stack_a, ft_lstnew((char *)argv[i + 1]));
			ft_lstadd_back(&stack_b, ft_lstnew(NULL));
			i++;
		}
	}
	return 0;
}
