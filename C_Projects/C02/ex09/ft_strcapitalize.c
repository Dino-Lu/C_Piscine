/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinlu <jinlu@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 12:00:13 by jinlu             #+#    #+#             */
/*   Updated: 2025/02/25 15:44:58 by jinlu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_alphanum(char c)
{
	if ((c < 48) || (c > 57 && c < 65) || (c > 90 && c < 97) || (c > 122))
		return (0);
	else
		return (1);
}

char	to_upper(char c)
{
	if (c >= 97 && c <= 122)
	{
		return (c - 32);
	}
	return (c);
}

char	to_lower(char c)
{
	if (c >= 65 && c <= 90)
	{
		return (c + 32);
	}
	return (c);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	is_new_word;

	i = 0;
	is_new_word = 1;
	while (str[i] != '\0')
	{
		if (is_alphanum(str[i]))
		{
			if (is_new_word && (str[i] >= 97 && str[i] <= 122))
				str[i] = to_upper(str[i]);
			else if (!is_new_word && (str[i] >= 65 && str[i] <= 90))
				str[i] = to_lower(str[i]);
			is_new_word = 0;
		}
		else
			is_new_word = 1;
		i++;
	}
	return (str);
}
