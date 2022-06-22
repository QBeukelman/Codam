/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   find_BFS.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: cwesseli <cwesseli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/20 17:52:49 by cwesseli      #+#    #+#                 */
/*   Updated: 2022/06/22 19:02:29 by qbeukelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// Generate a 2 dimensional array "grid" with malloc. 
int	**make_grid(int row, int col)
{
	int	**grid;
	int	i;

	i = 0;
	grid = malloc(row * sizeof(int));
	if (!grid)
	{
		write(1, "Malloc error", 12);
		return (0);
	}
	while (i <= row)
	{
		grid[i] = malloc(col * sizeof(int));
		i++;
	}
	return (grid);
}

// Fill "grid" with biggeset possible values of a square,
// assuming no obstacles in the grid.
// Pixels are regarded as upper left corners of a square
void	start_values(int row, int col, int **grid)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	printf("\nstart values:\n"); //remove
	while (y < row)
	{
		while (x < col)
		{
			if ((col - x) <= (row - y))
				grid[x][y] = (col - x);
			else
				grid[x][y] = (row - y);
			printf("%d ", grid[x][y]);
			x++;
		}
		x = 0;
		printf("\n"); // remove
		y++;
	}
}

// Checks per pixel if there is an obstical in the value range
// Needs an external var input from other team. Global var?
int	check_pix(char **map, int **grid, int x, int y)
{
	int xx = x;
	int yy = y;

	while (xx < (grid[x][y]))
	{
		while (yy < (grid[x][y]))
		{
			if ((map[xx][yy]) == 'o')  // always returns 0 for unknow reasons.
			{
				return (0);
			}
			yy++;
		}
		yy = y;
		xx++;
	}
	return (1);
}

// Set new values in grid based on check-pix return. 
// Decrease the value if value found an obstacle
void	new_values(int row, int col, int **grid, char **map)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	printf("\nnew values:\n"); //remove
	while (x < col)
	{
		while (y < row)
		{
			if (map[x][y] == 'o')
			{	
				grid[x][y] = 1;
				printf("%d ", grid[x][y]); //remove
				y++;
			}
			else
			{
				while (grid[x][y] != 1)
				{
					if (check_pix(map, grid, x, y) == 0)
						grid[x][y]--;
					else
						break ;
				}
				printf("%d ", grid[x][y]); //remove
				y++;
			}
		}
		y = 0;
		printf("\n");
		x++;
	}
}

// Print the orignal map for comparison
void print_map(int row, int col, char **map)
{
	int x;
	int y;

	x = 0;
	y = 0;
	while (x < col)
	{
		while (y < row)
		{
			printf("%c ", map[x][y]);
			y++;
		}
		printf("\n");
		y = 0;
		x++;
	}
}

// Compare the new values and finds and returns the biggest one.
// Case of equal values, look at most upper then at most left.
int	*big_square(int row, int col, int **grid)
{
	int	x;
	int	y;
	int	*big_s;

	x = 0;
	y = 0;
	big_s = malloc(sizeof(int) * 3);
	big_s[0] = col;
	big_s[1] = row;
	big_s[2] = 1;
	while (y < row)
	{
		while (x < col)
		{
			if ((grid[x][y] == big_s[2] && y == big_s[1] && x < big_s[0])
				|| (grid[x][y] == big_s[2] && y < big_s[1])
				|| (grid[x][y] > big_s[2]))
			{
				big_s[0] = x;
				big_s[1] = y;
				big_s[2] = grid[x][y];
			}
			x++;
		}
		x = 0;
		y++;
	}
	return (big_s);
}

int	main(void)
{
	int	col;
	int	row;
	int	**grid;
	int	*biggest;
	//int	**map;

	col = 5; //x
	row = 5; //y
	grid = make_grid(row, col);
	//map = make_grid(row,col);
	char *map[] = {
		(char[]){"..o.."}, 
		(char[]){"...o."}, 
		(char[]){"....."}, 
		(char[]){"...o."}, 
		(char[]){"o...."}}; 
	start_values(row, col, grid);
	new_values(row, col, grid, map);
	printf("\nThe map:\n"); //remove
	print_map(row, col, map);
	printf("\nchecked all pixels\n"); //remove
	biggest = big_square(row, col, grid);
	printf("\nbiggest square y, x, value:\n"); //remove
	for (int i=0 ; i<3; i++) //remove
		printf("%d,", biggest[i]); //remove
	//return (biggest);
}
