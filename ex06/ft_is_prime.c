/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufmann@student.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 16:48:41 by rkaufman          #+#    #+#             */
/*   Updated: 2021/10/14 18:55:13 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;
	int	half_nb;

	half_nb = (int) nb / 2;
	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= half_nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	i;

// 	i = -1;
// 	while (i < 999)
// 	{
// 		printf("ft_is_prime %i = %i\n", i, ft_is_prime(i));
// 		i++;
// 	}
// 	return (0);
// }