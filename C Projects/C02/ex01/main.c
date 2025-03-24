#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main()
{
	unsigned int	m;

	m = 12;
	char src[] = "Hello World!";
	char dest[20];

	ft_strncpy(dest, src, m);
	printf("%s\n", dest);
	return (0);
}
