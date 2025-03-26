#include <unistd.h>

char	*ft_strlowcase(char *str);

int	main()
{
	char str[] = "12aBCbbD";
	ft_strlowcase(str);
	write(1, str, sizeof(str) -1);
	write(1, "\n", 1);
	return (0);
}
