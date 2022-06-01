/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufmann@student.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 16:41:47 by rkaufman          #+#    #+#             */
/*   Updated: 2021/10/14 18:57:55 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	i;

// 	i = -1;
// 	while (i < 29)
// 	{
// 		printf("fibonaccy of %i = %i\n", i, ft_fibonacci(i));
// 		i++;
// 	}
// 	return (0);
// }