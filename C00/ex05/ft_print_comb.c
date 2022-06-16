/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_comb.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: qbeukelm <qbeukelm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/05 17:34:40 by qbeukelm      #+#    #+#                 */
/*   Updated: 2022/06/06 20:47:34 by qbeukelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	calc_a(int a)
{
	int	ai;

	ai = a + '0';
	write(1, &ai, 1);
}

void	calc_b(int b)
{
	int	bi;

	bi = b + '0';
	write(1, &bi, 1);
}

void	calc_c(int a, int b, int c)
{
	char	c_space;
	char	c_comma;
	int		ci;

	c_space = ' ';
	c_comma = ',';
	ci = c + '0';
	if (a == 7 && b == 8 && c == 9)
	{
		write(1, &ci, 1);
	}
	else
	{
		write(1, &ci, 1);
		write(1, &c_comma, 1);
		write(1, &c_space, 1);
	}
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	b = 1;
	c = 2;
	while (a <= 7)
	{
		while (b <= 8)
		{
			while (c <= 9)
			{
				calc_a(a);
				calc_b(b);
				calc_c(a, b, c);
				c++;
			}
			b++;
			c = (b + 1);
		}
		a++;
		b = a + 1;
		c = b + 1;
	}
}
