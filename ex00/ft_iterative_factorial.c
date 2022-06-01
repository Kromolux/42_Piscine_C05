/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufmann@student.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 16:30:55 by rkaufman          #+#    #+#             */
/*   Updated: 2021/10/14 18:59:46 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	sum;

	sum = 1;
	if (nb < 0)
		return (0);
	i = 1;
	while (i <= nb)
	{
		sum *= i;
		i++;
	}
	return (sum);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	i;

// 	i = -1;
// 	while (i < 9)
// 	{
// 		printf("ft_iterative_factorial %i = %i\n",
//			i, ft_iterative_factorial(i));
// 		i++;
// 	}
// 	return (0);
// }