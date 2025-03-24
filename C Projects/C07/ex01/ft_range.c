/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinlu <jinlu@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 10:51:13 by jinlu             #+#    #+#             */
/*   Updated: 2025/03/11 11:08:13 by jinlu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*range;

	if (min >= max)
		return (NULL);
	range = (int *)malloc((max - min) * sizeof(int));
	if (range == NULL)
		return (NULL);
	i = 0;
	while (min + i < max)
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}
/*
int	main()
{
	int	*a1 = ft_range(2, 9);
	int	i;

	i = 0;
	if (a1 != NULL)
	{
		while (i < 7)
		{
			printf("%d", a1[i]);
			i++;
		}
		printf("\n");

		free(a1);
	}
	else
	{
		printf("NULL\n");
	}
	return (0);
}*/
