#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main()
{
	char str[] = "012345a";
	int i = ft_str_is_numeric(str);
	printf("%d\n", i);
	return (0);
}
