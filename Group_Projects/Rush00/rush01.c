/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinlu <jinlu@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 09:16:39 by jinlu             #+#    #+#             */
/*   Updated: 2025/02/23 09:29:30 by jinlu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_row(int x, char left, char middle, char right)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (i == 0)
			ft_putchar(left);
		else if (i == x - 1)
			ft_putchar(right);
		else
			ft_putchar(middle);
		i++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	i = 0;
	if (x <= 0 || y <= 0)
	{
		write(1, "No way!\n", 8);
		return ;
	}
	ft_print_row(x, '/', '*', '\\');
	while (++i < y - 1)
		ft_print_row(x, '*', ' ', '*');
	if (y > 1)
		ft_print_row(x, '\\', '*', '/');
}
