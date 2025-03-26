#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main()
{
	int	n;
	char dest[20] = "Hello ";
	char src[15] = "World!";
	n = ft_strlcat(dest, src, 40);
	printf("Result: %d\n", n);
	printf("dest: %s\n", dest);
	return (0);
}
