/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_fibonacci.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: qbeukelm <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/21 17:51:00 by qbeukelm      #+#    #+#                 */
/*   Updated: 2022/06/22 21:57:04 by qbeukelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// Fn = F(n1) + F(n2)

#include <stdio.h>

int	ft_fibonacci(int index);

int	ft_fibonacci(int index)
{
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
	int	index;
	int	quotient;

	index = 20;
	quotient = ft_fibonacci(index);
	printf("\n\nThe result is: %d", quotient);
}
*/