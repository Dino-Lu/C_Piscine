#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main()
{
	unsigned int	i;

	char src[] = "Hello World!";
	char dest[20];

	i = ft_strlcpy(dest, src, sizeof(dest));
	printf("Copied string: %s\n", dest);
	printf("Length of source: %u\n", i);
	return (0);
}
