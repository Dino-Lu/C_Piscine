#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main()
{
	char src[] = "Hello world!";
	char dest[42];

	ft_strcpy(dest, src);
	printf("%s\n", dest);
	return (0);
}
