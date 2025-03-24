#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main()
{
	unsigned int	n;

	n = 4;
	char s1[] = "Hello";
	char s2[] = "HelloNiHao";
	printf("%d\n", ft_strncmp(s1, s2, n));
	printf("%d\n", ft_strncmp("abc", "abcde", 3));
	printf("%d\n", ft_strncmp("abc", "abd", 3));
	printf("%d\n", ft_strncmp("abcdef", "abc", 6));
	printf("%d\n", ft_strncmp("Hello", "Hella", 4));
	return (0);
}
