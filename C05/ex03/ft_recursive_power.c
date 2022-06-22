/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_recursive_power.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: qbeukelm <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/21 13:38:47 by qbeukelm      #+#    #+#                 */
/*   Updated: 2022/06/22 21:56:10 by qbeukelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power);

int	ft_recursive_power(int nb, int power)
{
	int	quotient;

	quotient = 1;
	if (power < 0)
		return (0);
	if (power != 0)
	{
		quotient = nb * ft_recursive_power(nb, (power - 1));
	}
	return (quotient);
}

/* 
int	main(void)
{
	int	nb;
	int	power;
	int	quotient;

	nb = 3;
	power = 4;
	quotient = ft_recursive_power(nb, power);
	printf("\n\nThe result is: %d", quotient);
}
*/