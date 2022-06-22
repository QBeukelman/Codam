/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_iterative_factorial.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: qbeukelm <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/21 10:06:32 by qbeukelm      #+#    #+#                 */
/*   Updated: 2022/06/22 21:51:46 by qbeukelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// n! = n (n - 1) x ... x 1
// 5! = 5 * 4 * 3 * 2 * 1 = 5 * 24 = 120

#include <stdio.h>

int	ft_iterative_factorial(int nb);

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	fact;

	i = 1;
	fact = 1;
	while (i <= nb)
	{
		fact = fact * i;
		i++;
	}
	return (fact);
}

/* 
int	main(void)
{
	int	nb;
	int	quotient;

	nb = 6;
	quotient = ft_iterative_factorial(nb);
	printf("\n\nThe result is: %d", quotient);
}
*/