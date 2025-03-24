#include <stdio.h>

char	*ft_strupcase(char *str);

int	main()
{
	char str[]= "abCDeF";
	ft_strupcase(str);
	printf("%s\n", str);
	return (0);
}
