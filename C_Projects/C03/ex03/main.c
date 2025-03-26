#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main()
{
	char str1[50] = "How are you?";
	char str2[] = "I'm fine.";

	ft_strncat(str1, str2, 7);
	printf("%s\n", str1);
	return (0);
}
