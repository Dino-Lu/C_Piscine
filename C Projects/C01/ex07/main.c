#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int	main()
{
	int nums[7] = {11, 22, 33, 44, 55, 66, 77};

	ft_rev_int_tab(nums, 7);
	printf("After reverse: %d, %d, %d, %d, %d, %d, %d\n", nums[0], nums[1], nums[2], nums[3], nums[4], nums[5], nums[6]);
	return (0);
}
