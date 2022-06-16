/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_ultimate_div_mod.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: qbeukelm <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/08 13:29:56 by qbeukelm      #+#    #+#                 */
/*   Updated: 2022/06/14 19:34:35 by qbeukelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp_a;
	int	temp_b;

	temp_a = *a;
	temp_b = *b;
	*a = (temp_a / temp_b);
	*b = (temp_a % temp_b);
}

/* 
int	main(void)
{
	int	a = 99;
	int b = 8;

	ft_ultimate_div_mod(&a, &b);
	printf("%d, %d", a, b);
	return (0);
}
 */