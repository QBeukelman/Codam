/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_comb2.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: qbeukelm <qbeukelm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/06 16:09:36 by qbeukelm      #+#    #+#                 */
/*   Updated: 2022/06/06 20:59:27 by qbeukelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_print_comb2(void);
void	write_output_b(int b);
void	write_output_a(int a, int b);
void	define_a_b(void);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	write_output_b(int b)
{
	char	char_b1;
	char	char_b2;

	char_b1 = b / 10 + '0';
	char_b2 = b % 10 + '0';
	ft_putchar(char_b1);
	ft_putchar(char_b2);
	ft_putchar(' ');
}

void	write_output_a(int a, int b)
{
	char	char_a1;
	char	char_a2;

	char_a1 = a / 10 + '0';
	char_a2 = a % 10 + '0';
	ft_putchar(char_a1);
	ft_putchar(char_a2);
	if (b != 98)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int		a;
	int		b;

	a = 1;
	b = 0;
	while (b <= 98)
	{
		while (a <= 99)
		{
			write_output_b(b);
			write_output_a(a, b);
			a++;
		}
		a = (b + 1);
		b++;
		a = (b + 1);
	}
}
