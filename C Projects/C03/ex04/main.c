#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char str1[] = "hello world";
	char to_find1[] = "world";
	char str2[] = "abcdef";
	char to_find2[] = "def";
	char str3[] = "abcdef";
	char to_find3[] = "xyz";
	char str4[] = "hello";
	char to_find4[] = "";
	char *result;

	result = ft_strstr(str1, to_find1);
	if (result)
		printf("Found: %s\n", result);
	else
		printf("Not found\n");

	result = ft_strstr(str2, to_find2);
	if (result)
		printf("Found: %s\n", result);
	else
		printf("Not found\n");

	result = ft_strstr(str3, to_find3);
	if (result)
		printf("Found: %s\n", result);
	else
		printf("Not found\n");

	result = ft_strstr(str4, to_find4);
	if (result)
		printf("Found: %s\n", result);
	else
		printf("Not found\n");
	
	return 0;
}
