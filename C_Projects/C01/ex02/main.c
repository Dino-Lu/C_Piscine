#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int x = 3;
	int y = 9;

	printf("Before swap, x is %d, y is %d\n", x, y);
	ft_swap(&x, &y);
	printf("After swap, x becomes to %d, and y equals to %d\n", x, y);
	return (0);
}
