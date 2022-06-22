/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sqrt.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: qbeukelm <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/21 18:20:24 by qbeukelm      #+#    #+#                 */
/*   Updated: 2022/06/22 21:57:39 by qbeukelm      ########   odam.nl         */
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
	quotient = ft_sqrt(nb);
	printf("The result is: %d", quotient);
}
*/