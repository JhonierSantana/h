/*
 * Auth: Jhonier Santana
 */
#include "main.h"
#include <stdlib.h>
/**
 * free_grid - function
 * @height: length
 * @grid: a bidimensional pointer
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}
