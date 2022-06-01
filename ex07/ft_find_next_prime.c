/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufmann@student.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 18:48:37 by rkaufman          #+#    #+#             */
/*   Updated: 2021/10/14 18:55:05 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb);

int	ft_find_next_prime(int nb)
{
	int	i;

	if (ft_is_prime(nb))
		return (nb);
	i = nb + 1;
	while (!(ft_is_prime(i)))
		i++;
	return (i);
}

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
// 		printf("ft_find_next_prime %i = %i\n", i, ft_find_next_prime(i));
// 		i++;
// 	}
// 	return (0);
// }