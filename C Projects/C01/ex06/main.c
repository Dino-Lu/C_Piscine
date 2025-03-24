#include <stdio.h>

int	ft_strlen(char *str);

int	main()
{
	char	*s;
	int	p;

	s = "Hello World!";
	p = ft_strlen(s);
	printf("Count number:%d\n", p);
	return (0);
}
