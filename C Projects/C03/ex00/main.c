#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	main()
{
	int	n;
	char s1[] = "Hello";
	char s2[] = "Hallo";
	n = ft_strcmp(s1, s2);
	printf("%d\n", n);
	printf("%d\n", ft_strcmp("Hello", "Hello World"));
	return (0);
}
