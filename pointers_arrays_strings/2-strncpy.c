/*
 * File: 2-strncpy.c
 * Auth: Jhonier Santana
 */

/**
 * _strncpy - copies n bytes of src to the dest string
 * @dest: string to copy to
 * @src: string being copied
 * @n: largest number of bytes to copy
 *
 * Return: addres of dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && *(src + i))
	{
		*(dest + i) = *(src + 1);
		i++;
	}
	while (i < n)
	{
		*(dest + i) = '\0';
	}
	return (dest);
}
