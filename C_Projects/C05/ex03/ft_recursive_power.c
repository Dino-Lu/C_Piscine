/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinlu <jinlu@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 10:05:32 by jinlu             #+#    #+#             */
/*   Updated: 2025/03/10 11:13:29 by jinlu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (nb * ft_recursive_power(nb, power - 1));
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d", ft_recursive_power(2, 4));
	printf("%d", ft_recursive_power(0, 0));
	printf("%d", ft_recursive_power(2, 0));
	printf("%d", ft_recursive_power(0, 4));
	printf("%d", ft_recursive_power(2, -2));
	return (0);
}*/
