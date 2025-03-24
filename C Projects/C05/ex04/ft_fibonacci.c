/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinlu <jinlu@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 11:14:54 by jinlu             #+#    #+#             */
/*   Updated: 2025/03/10 11:31:14 by jinlu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index < 2)
		return (index);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*
#include <stdio.h>

int	main()
{
	printf("Fibonacci(0) = %d\n", ft_fibonacci(0));
	printf("Fibonacci(1) = %d\n", ft_fibonacci(1));
	printf("Fibonacci(2) = %d\n", ft_fibonacci(2));
	printf("Fibonacci(3) = %d\n", ft_fibonacci(3));
	printf("Fibonacci(-1) = %d\n", ft_fibonacci(-1));
	return (0);
}*/
