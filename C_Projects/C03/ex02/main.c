#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int	main()
{
	char dest[20] = "Hi, ";
	char src[] = "I'm Dino!";
	ft_strcat(dest, src);
	printf("%s\n", dest);
	return (0);
}
