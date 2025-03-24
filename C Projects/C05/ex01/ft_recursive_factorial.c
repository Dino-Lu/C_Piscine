/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinlu <jinlu@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 10:34:31 by jinlu             #+#    #+#             */
/*   Updated: 2025/03/09 10:54:26 by jinlu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	result;

	if (nb < 0)
		return (0);
	result = 1;
	if (nb > 0)
	{
		result = nb * ft_recursive_factorial(nb - 1);
	}
	return (result);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_recursive_factorial(-4));
	printf("%d\n", ft_recursive_factorial(0));
	printf("%d\n", ft_recursive_factorial(5));
	return (0);
}*/
