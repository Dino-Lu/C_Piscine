/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinlu <jinlu@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 09:18:28 by jinlu             #+#    #+#             */
/*   Updated: 2025/02/20 09:36:57 by jinlu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_comma(void)
{
	write(1, ",", 1);
	write(1, " ", 1);
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = 47;
	while (a++ <= '7')
	{
		b = a;
		while (b++ <= '8')
		{
			c = b;
			while (c++ < '9')
			{
				if (a < b && b < c)
				{
					write(1, &a, 1);
					write(1, &b, 1);
					write(1, &c, 1);
					if (!(a == '7' && b == '8' && c == '9'))
						ft_comma();
				}
			}
		}
	}
}
/*int	main(void)
{
	ft_print_comb();
	return (0);
}*/
