#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int	main()
{
	int nums[5] = {50, 43, 67, 28, 45};
	
	printf("Before sorting: %d, %d, %d, %d, %d\n", nums[0], nums[1], nums[2], nums[3], nums[4]);
	ft_sort_int_tab(nums, 5);
	printf("After sorting: %d, %d, %d, %d, %d\n", nums[0], nums[1], nums[2], nums[3], nums[4]);
	return (0);
}
