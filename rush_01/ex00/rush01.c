#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void 	ft_putchar(char c);
void	sky_scraper(char *str);

int main(int argc, char **argv)
{
	char *str;

	str = argv[1];
	if (argc == 2)
	{
		sky_scraper(str);
	}
	else if (argc > 2)
	{
		printf("Too many arguments");
	}
	else
	{
		printf("One argument expected");
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	sky_scraper(char *str)
{
	char in_top[4];
	char in_bottom[4];
	char in_left[4];
	char in_right[4];

	int a = 0;
	int b = 0;

	// encode input
	while(a < 4)
	{
		in_top[a] = str[b * 2];
		ft_putchar(in_top[a]);
		a++;
		b++;
		
	}
	a = 0;
	write(1, " - ", 3);
	while(a < 4)
	{
		in_bottom[a] = str[b * 2];
		ft_putchar(in_bottom[a]);
		a++;
		b++;
	}
	a = 0;
	write(1, " - ", 3);
	while(a < 4)
	{
		in_left[a] = str[b * 2];
		ft_putchar(in_left[a]);
		a++;
		b++;
	}
	a = 0;
	write(1, " - ", 3);
	while(a < 4)
	{
		in_right[a] = str[b * 2];
		ft_putchar(in_right[a]);
		a++;
		b++;
	}

	printf("\n");

	// calculate 
	int x = 0;
	int y = 0;
	int m = 0;
	int matrix[4][4] = {{0,0,0,0}, {0,0,0,0}, {0,0,0,0}, {0,0,0,0}};
	int matrix_back[4][4] = {{0,0,0,0}, {0,0,0,0}, {0,0,0,0}, {0,0,0,0}};
	
	// Encode matrix_back
	while (y < 4)
	{
		while (x < 4)
		{
			matrix_back[y][x] = m;
			x++;
			m++;
		}
		x = 0;
		y++;
	}

	// CHECK SIDES -----------------
	// check top virticle
	x = 0;
	y = 0;
	int i = 0;
	int v = 1;
   	while (y < 4)
	{
		while (x < 4)
		{
			if(in_top[x] == '4')
			{
				while (i < 4)
				{
					matrix[i][x] = v;
					i++;
					v++;
				}
			}
			else if(in_top[x] == '1')
			{
				matrix[0][x] = 4;
			}
			x++;
		}
		x = 0;
		y++;
	} 

	// check left hotizontal
	x = 0;
	y = 0;
	i = 0;
	v = 1;
	while (x < 4)
	{
		while (y < 4)
		{
			if(in_left[y] == '4')
			{
				while (i < 4)
				{
					matrix[y][i] = v;
					i++;
					v++;
				}
			}
			else if(in_left[y] == '1')
			{
				matrix[y][0] = 4;
			}
			y++;
		}
		y = 0;
		x++;
	} 

 	// check right hotizontal
	x = 0;
	y = 0;
	i = 3;
	v = 4;
	while (x < 4)
	{
		while (y < 4)
		{
			if(in_right[y] == '4')
			{
				while (i >= 0)
				{
					matrix[y][i] = v;
					i--;
					v--;
				}
			}
			else if(in_right[y] == '1')
			{
				matrix[y][0] = 4;
			}
			y++;
		}
		y = 0;
		x++;
	}  
  
	// check bottom virticle
	x = 0;
	y = 0;
	i = 3;
	v = 4;
  	while (y < 4)
	{
		while (x < 4)
		{
			if(in_bottom[x] == '4')
			{
				while (i >= 0)
				{
					matrix[i][x] = v;
					i--;
					v--;
				}
			}
			else if(in_bottom[x] == '1')
			{
				matrix[0][x] = 4;
			}
			x++;
		}
		x = 0;
		y++;
	}  
  
	// CHECK 1 & 2 ------------------
 	x = 0;
 	while (x <= 3)
	{
		if (in_top[x] == '1' && in_bottom[x] == '2') 
		{
			if (matrix[3][x] == 0)
			{
				matrix[3][x] = 3;
			}
		}
		else if (in_bottom[x] == '1' && in_top[x] == '2')
		{
			if (matrix[0][x] == 0)
			{
				matrix[0][x] = 3;
			}
		}
		x++;
	} 
 	y = 0;
	while (y <= 3)
	{
		if(in_left[y] == '1' && in_right[y] == '2') 
		{
			if (matrix[y][3] == 0)
			{
				matrix[y][3] = 3;
			}
		}
		else if (in_right[y] == '1' && in_left[y] == '2')
		{
			if (matrix[y][0] == 0)
			matrix[y][0] = 3;
		}
		y++;
	}

	printf("----------\n\n\n");
	x = 0;
	y = 0;
	while (y < 4)
	{
		printf("%d: \t", y);
		while (x < 4)
		{
			printf("[%d]", matrix[y][x]);
			if(matrix_back[y][x] <= 9)
			{
				printf("0");
				printf("%d   ", matrix_back[y][x]);
			}
			else
			{
				printf("%d   ", matrix_back[y][x]);
			}
			x++;
		}
		printf("\n");
		x = 0;
		while (x < 4)
		{
			x++;
		}
		x = 0;
		printf("\n");
		printf("\n");
		y++;
	}
	printf("\n\n----------"); 
}