/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_is_prime.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: qbeukelm <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/22 10:37:02 by qbeukelm      #+#    #+#                 */
/*   Updated: 2022/06/22 22:00:07 by qbeukelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb);

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
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
	int	nb;
	int	result;

	nb = 11;
	result = ft_is_prime(nb);
	printf("The result is: %d", result);
}
*/