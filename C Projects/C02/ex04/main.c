#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main()
{
	char str[] = "abcde";
	int i = ft_str_is_lowercase(str);
	printf("%d\n", i);
	return (0);
}
