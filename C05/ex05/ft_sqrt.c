/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sqrt.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: qbeukelm <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/21 18:20:24 by qbeukelm      #+#    #+#                 */
/*   Updated: 2022/06/23 11:47:11 by qbeukelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// √144 = ± [(2 × 2 × 3)^2]^1/2
// √16 = 16^0.5

#include <stdio.h>

int	ft_sqrt(int nb);

int	ft_sqrt(int nb)
{
	double	temp;
	double	square;
	int		i;

	square = nb / 2;
	temp = 0;
	i = 0;
	if (nb < 0)
		return (0);
	if (nb == 1)
		return (1);
	while (square != temp && i < 1000000)
	{
		temp = square;
		i++;
		square = (nb / temp + temp) / 2;
	}
	if (square == (int)square)
		return (square);
	else
		return (0);
}

/* 
int	main(void)
{
	int	nb;
	int	quotient;

	nb = 9;
	quotient = ft_sqrt(-485);
	printf("\n-485: %d", quotient);
	quotient = ft_sqrt(0);
	printf("\n0: %d", quotient);
	quotient = ft_sqrt(1);
	printf("\n1: %d", quotient);
	quotient = ft_sqrt(2);
	printf("\n2: %d", quotient);
	quotient = ft_sqrt(1640045925);
	printf("\n1640045925: %d", quotient);
	quotient = ft_sqrt(2147395600);
	printf("\n2147395600: %d", quotient);
}
*/