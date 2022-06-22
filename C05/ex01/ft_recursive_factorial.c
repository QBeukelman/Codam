/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_recursive_factorial.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: qbeukelm <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/21 12:52:52 by qbeukelm      #+#    #+#                 */
/*   Updated: 2022/06/22 21:52:43 by qbeukelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb);

int	ft_recursive_factorial(int nb)
{
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
	int	nb;
	int	quotient;

	nb = 5;
	quotient = ft_recursive_factorial(nb);
	printf("\n\nThe result is: %d", quotient);
}
*/