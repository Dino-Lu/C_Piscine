#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main()
{
	char str[] = "\0";
	int i = ft_str_is_printable(str);
	printf("%d\n", i);
	return (0);
}
