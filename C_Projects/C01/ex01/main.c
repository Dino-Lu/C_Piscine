#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

int	main(void)
{
	int	num;
	int	*nbr;
	int	**nbr2;
	int	***nbr3;
	int	****nbr4;
	int	*****nbr5;
	int	******nbr6;
	int	*******nbr7;
	int	********nbr8;
	int	*********nbr9;

	nbr9 = &nbr8;
	nbr8 = &nbr7;
	nbr7 = &nbr6;
	nbr6 = &nbr5;
	nbr5 = &nbr4;
	nbr4 = &nbr3;
	nbr3 = &nbr2;
	nbr2 = &nbr;
	nbr = &num;

	ft_ultimate_ft(nbr9);
	printf("%d\n", num);
	return (0);
}
