#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main()
{
	char str[] = "Hello";
	int i = ft_str_is_alpha(str);
	printf("%d\n", i);
	return (0);
}
