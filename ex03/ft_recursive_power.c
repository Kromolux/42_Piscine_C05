/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufmann@student.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 16:33:42 by rkaufman          #+#    #+#             */
/*   Updated: 2021/10/14 18:57:35 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	i;
// 	int	j;

// 	i = -1;
// 	while (i <= 9)
// 	{
// 		j = -1;
// 		while (j <= 9)
// 		{
// 			printf("ft_recursive_power %i ^ %i = %i\n",
//				i, j, ft_recursive_power(i,j));
// 			j++;
// 		}
// 		i++;
// 	}
// 	return (0);
// }