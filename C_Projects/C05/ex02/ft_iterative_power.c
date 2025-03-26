/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinlu <jinlu@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 10:55:47 by jinlu             #+#    #+#             */
/*   Updated: 2025/03/10 10:04:23 by jinlu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	result = nb;
	while (power > 1)
	{
		result *= nb;
		power--;
	}
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d", ft_iterative_power(2, 4));
	printf("%d", ft_iterative_power(0, 0));
	printf("%d", ft_iterative_power(2, 0));
	printf("%d", ft_iterative_power(0, 4));
	printf("%d", ft_iterative_power(2, -2));
	return (0);
}*/
