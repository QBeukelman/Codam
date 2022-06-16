/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rectangle.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbeukelm <qbeukelm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 10:49:47 by qbeukelm      #+  #+#    #+#             */
/*   Updated: 2022/06/04 18:25:07 by qbeukelm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	rush(int x, int y);
void	horizontalfunc(int x, int y);
void	virticlefunc(int x, int y);
void	middlesection(int x, int y);

int	main(void)
{
	rush(10, 1);
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	horizontalfunc(int x, int y)
{
	int		xi;

	xi = 2;
	ft_putchar('o');
	while (xi < x)
	{
		ft_putchar('-');
		xi++;
	}
	xi = 2;
	ft_putchar('o');
	ft_putchar('\n');
}

void	virticlefunc(int x, int y)
{
	int	yi;

	yi = 2;
	ft_putchar('o');
	ft_putchar('\n');
	while (yi < y)
	{
		ft_putchar('|');
		ft_putchar('\n');
		yi++;
	}
	ft_putchar('o');
}

void	middlesectionfunc(int x, int y)
{
	int	xii;
	int	yi;

	xii = 2;
	yi = 2;
	while (yi < y)
	{
		ft_putchar('|');
		while (xii < x)
		{
			ft_putchar(' ');
			xii++;
		}
		ft_putchar('|');
		ft_putchar('\n');
		xii = 2;
		yi++;
	}
}

void	rush(int x, int y)
{
	int	xi;
	int	xii;
	int	yi;

	xi = 2;
	xii = 2;
	yi = 2;
	if (y == 1 && x == 1)
	{
		ft_putchar('o');
	}
	else if (y == 1 && x > 1)
	{
		horizontalfunc(x, y);
	}
	else if (x == 1 && y > 1)
	{
		virticlefunc(x, y);
	}
	else
	{
		horizontalfunc(x, y);
		middlesectionfunc(x, y);
		horizontalfunc(x, y);
	}
}




