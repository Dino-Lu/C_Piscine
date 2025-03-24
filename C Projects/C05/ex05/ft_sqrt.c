/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinlu <jinlu@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 11:32:04 by jinlu             #+#    #+#             */
/*   Updated: 2025/03/10 11:59:04 by jinlu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	while (i * i <= nb && i <= 46340)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int     main(void)
{
        printf("%d", ft_sqrt(25));
        return (0);
}

int	ft_sqrt_ex(int	nb)
{
	if (nb < 0)
		return (0);

	int	low = 0;
	int	high = nb;
	int	mid;

	while (low <= high)
	{
		mid = (low + high) / 2;

		if (mid * mid == nb)
			return (mid);
		else if (mid * mid < nb)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (0);
}

#include <stdio.h>

int	main(void)
{
	printf("%d", ft_sqrt_ex(25));
	return (0);
}*/
