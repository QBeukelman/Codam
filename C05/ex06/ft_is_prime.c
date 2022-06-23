/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_is_prime.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: qbeukelm <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/22 10:37:02 by qbeukelm      #+#    #+#                 */
/*   Updated: 2022/06/23 11:53:55 by qbeukelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb);

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i < (nb - 1))
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/* 
int	main(void)
{
	int	result;

	result = ft_is_prime(-4177);
	printf("\n-4177: %d", result);
	result = ft_is_prime(-12);
	printf("\n-12: %d", result);
	result = ft_is_prime(0);
	printf("\n0: %d", result);
	result = ft_is_prime(1);
	printf("\n1: %d", result);
	result = ft_is_prime(4219);
	printf("\n4219: %d", result);
	result = ft_is_prime(7853);
	printf("\n7853: %d", result);
}
*/