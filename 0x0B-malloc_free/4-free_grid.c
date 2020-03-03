#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - .
 * @grid : pointer to a 2 dimensional array.
 * @height : height of the grid
 * Return: void.
 */

void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
free(grid[i]);
free(grid);
}
