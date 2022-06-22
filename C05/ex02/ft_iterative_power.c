/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_iterative_power.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: qbeukelm <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/21 13:12:06 by qbeukelm      #+#    #+#                 */
/*   Updated: 2022/06/22 21:54:52 by qbeukelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// 3^3 = (3*3) + (3*3) + (3*3) = 27;

#include <stdio.h>

int	ft_iterative_power(int nb, int power);

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	quotient;

	i = 0;
	quotient = 1;
	if (power < 0)
		return (0);
	while (i < power)
	{
		quotient = quotient * nb;
		i++;
	}
	return (quotient);
}

/* 
int	main(void)
{
	int	nb;
	int	power;
	int	quotient;

	nb = 5;
	power = 5;
	quotient = ft_iterative_power(nb, power);
	printf("\n\nThe result is: %d", quotient);
}
*/