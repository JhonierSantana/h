#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: Pointer to a string
 * Return: 0
 */

unsigned int binary_to_uint(const char *b)
{
	int binary_max_idx = 0, actual_result = 1;
	unsigned int converted_int = 0;
	if (!b)
		return (0);

	binary_max_idx = strlen(b) - 1;

	while (binary_max_idx)
	{
		if (b[binary_max_idx] != '0' && b[binary_max_idx] != '1')
			return (0);

		converted_int += actual_result * (b[binary_max_idx] - '0');
		actual_result <<= 1;
		binary_max_idx--;
	}
	return (converted_int)
}
