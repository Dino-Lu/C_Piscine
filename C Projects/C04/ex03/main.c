#include <stdio.h>

int	ft_atoi(char *str);

int	main()
{
	printf("%d\n", ft_atoi("42"));
	printf("%d\n", ft_atoi("   --123"));
	printf("%d\n", ft_atoi("+99abc"));
	printf("%d\n", ft_atoi("  2147483647"));
	printf("%d\n", ft_atoi("-4 2"));
	return 0;
}
