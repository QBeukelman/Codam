/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_find_next_prime.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: qbeukelm <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/22 15:50:17 by qbeukelm      #+#    #+#                 */
/*   Updated: 2022/06/22 21:59:07 by qbeukelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_find_next_prime(int nb);
int	ft_is_prime(int nb);

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 1;
	while (ft_is_prime(nb + i) == 0)
	{
		i++;
	}
	return (nb + i);
}

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	while (i < (nb - 1))
	{
		if ((nb % i) == 0)
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

	nb = 2005134636;
	result = ft_find_next_prime(nb);
	printf("The result is: %d", result);
}
*/