/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufmann@student.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 16:33:23 by rkaufman          #+#    #+#             */
/*   Updated: 2021/10/14 18:58:09 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	if (power < 0)
		return (0);
	while (i < power)
	{
		result = result * nb;
		i++;
	}
	return (result);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	i;
// 	int	j;

// 	i = 0;
// 	while (i <= 9)
// 	{
// 		j = -1;
// 		while (j <= 9)
// 		{
// 			printf("ft_iterative_power %i ^ %i = %i\n",
//				i, j, ft_iterative_power(i,j));
// 			j++;
// 		}
// 		i++;
// 	}
// 	return (0);
// }