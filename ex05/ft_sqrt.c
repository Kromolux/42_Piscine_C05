/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufmann@student.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 16:48:16 by rkaufman          #+#    #+#             */
/*   Updated: 2021/10/14 18:58:59 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int		i;

	if (nb <= 0)
		return (0);
	i = 1;
	while (i <= nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	i;

// 	i = -1;
// 	while (i < 999)
// 	{
// 		printf("ft_sqrt of %i = %i\n", i, ft_sqrt(i));
// 		i++;
// 	}
// 	return (0);
// }