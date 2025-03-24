/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinlu <jinlu@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 12:51:13 by jinlu             #+#    #+#             */
/*   Updated: 2025/03/10 13:02:24 by jinlu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	i = 2;
	while (i <= nb / 2)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 1)
		return (2);
	while (!ft_is_prime(nb))
	{
		nb++;
	}
	return (nb);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d", ft_find_next_prime(0));
	printf("%d", ft_find_next_prime(1));
	printf("%d", ft_find_next_prime(2));
	printf("%d", ft_find_next_prime(7));
	printf("%d", ft_find_next_prime(16));
	return (0);
}*/
