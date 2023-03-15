#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional array
 * @grid: matrix file
 * @height: columns
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (;height >= 0; height --)
			free(grid[height]);
		free(grid);
	}
}
