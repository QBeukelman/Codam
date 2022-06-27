/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_range.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: qbeukelm <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/27 09:31:21 by qbeukelm      #+#    #+#                 */
/*   Updated: 2022/06/27 09:41:01 by quentinbeuk   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int *ft_range(int min, int max);

int *ft_range(int min, int max)
{
	int	*tab;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	tab = (int*)malloc(sizeof(*tab) * (max - min));
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}

int	main(void)
{
	int	min;
	int	max;
	int	*result;
	int	i;

	min	= 20;
	max = 40;
	i = 0;
	result = ft_range(min, max);
	while (result[i])
	{
		printf("%d, ", result[i]);
		i++;
	}
	return (0);
}
