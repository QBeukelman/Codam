/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: qbeukelm <qbeukelm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/06 16:04:54 by qbeukelm      #+#    #+#                 */
/*   Updated: 2022/06/06 20:46:37 by qbeukelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int n);
void	calculate_characters(int n, int count);
void	write_characters(int n, int count);
void	count_characters(int n, int count);

void	ft_putnbr(int n)
{
	int	count;

	count = 0;
	count_characters(n, count);
}

void	calculate_characters(int n, int count)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (n < 0)
	{
		n = n * -1;
		write(1, "-", 1);
		write_characters(n, count);
	}
	else if (n == 0)
	{
		write(1, "0", 1);
	}
	else if (n > 0)
	{
		write_characters(n, count);
	}
}

void	write_characters(int n, int count)
{
	char	c[10];
	int		array_pointer;

	array_pointer = (count - 1);
	while (n != 0)
	{
		c[array_pointer] = n % 10 + '0';
		n = n / 10;
		array_pointer--;
	}
	write(1, c, count);
}

void	count_characters(int n, int count)
{
	int	n_new;

	n_new = n;
	while (n_new != 0)
	{
		n_new = n_new / 10;
		count++;
	}
	calculate_characters(n, count);
}
