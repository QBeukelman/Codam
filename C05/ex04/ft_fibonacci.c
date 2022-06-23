/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_fibonacci.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: qbeukelm <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/21 17:51:00 by qbeukelm      #+#    #+#                 */
/*   Updated: 2022/06/23 11:40:13 by qbeukelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// Fn = F(n1) + F(n2)

#include <stdio.h>

int	ft_fibonacci(int index);

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index < 2)
		return (index);
	else
		return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}

/* 
int	main(void)
{
	int	quotient;

	quotient = ft_fibonacci(-1037);
	printf("\n-1037: %d", quotient);
	quotient = ft_fibonacci(0);
	printf("\n0: %d", quotient);
	quotient = ft_fibonacci(1);
	printf("\n1: %d", quotient);
	quotient = ft_fibonacci(2);
	printf("\n2: %d", quotient);
	quotient = ft_fibonacci(3);
	printf("\n3: %d", quotient);
	quotient = ft_fibonacci(17);
	printf("\n17: %d", quotient);
	quotient = ft_fibonacci(5);
	printf("\n5: %d", quotient);
}
*/