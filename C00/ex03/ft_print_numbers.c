/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_numbers.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: qbeukelm <qbeukelm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/06 16:41:59 by qbeukelm      #+#    #+#                 */
/*   Updated: 2022/06/06 20:48:35 by qbeukelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	int	i;

	i = a + '0';
	write(1, &i, 1);
}

void	ft_print_numbers(void)
{
	int	i;

	i = 0;
	while (i < 10)
	{
		ft_putchar(i);
		i++;
	}
}
