#include <stdio.h>

int	ft_strlen(char *str);

int	main()
{
	int	p;

	char str[] = "Hello World!";
	p = ft_strlen(str);
	printf("Count number:%d\n", p);
	return (0);
}
