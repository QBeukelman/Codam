/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_recursive_factorial.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: qbeukelm <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/21 12:52:52 by qbeukelm      #+#    #+#                 */
/*   Updated: 2022/06/23 12:56:30 by qbeukelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// n! = n (n - 1) x ... x 1
// 5! = 5 * 4 * 3 * 2 * 1 = 5 * 24 = 120

#include <stdio.h>

int	ft_recursive_factorial(int nb);

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb >= 1)
	{
		nb = nb * ft_recursive_factorial(nb - 1);
		return (nb);
	}
	else
		return (1);
}

/* 
int	main(void)
{
	int	quotient;

	quotient = ft_recursive_factorial(-66);
	printf("\n-66: %d", quotient);
	quotient = ft_recursive_factorial(0);
	printf("\n0: %d", quotient);
	quotient = ft_recursive_factorial(1);
	printf("\n1: %d", quotient);
	quotient = ft_recursive_factorial(2);
	printf("\n2: %d", quotient);
	quotient = ft_recursive_factorial(12);
	printf("\n12: %d", quotient);
	quotient = ft_recursive_factorial(3);
	printf("\n3: %d", quotient);
	quotient = ft_recursive_factorial(4);
	printf("\n4: %d", quotient);
	quotient = ft_recursive_factorial(5);
	printf("\n5: %d", quotient);
	quotient = ft_recursive_factorial(6);
	printf("\n6: %d", quotient);
	quotient = ft_recursive_factorial(7);
	printf("\n7: %d", quotient);
	quotient = ft_recursive_factorial(8);
	printf("\n8: %d", quotient);
	quotient = ft_recursive_factorial(9);
	printf("\n9: %d", quotient);
	quotient = ft_recursive_factorial(10);
	printf("\n10: %d", quotient);
	quotient = ft_recursive_factorial(11);
	printf("\n11: %d\n", quotient);
}
*/