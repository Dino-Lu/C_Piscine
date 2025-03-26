#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main()
{
	char str[] = "AbCDE";
	int i = ft_str_is_uppercase(str);
	printf("%d\n", i);
	return (0);
}
