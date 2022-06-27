/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_ultimate_range.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: qbeukelm <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/27 09:42:55 by qbeukelm      #+#    #+#                 */
/*   Updated: 2022/06/27 09:53:25 by quentinbeuk   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max);

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*return_val;
	int	i;

	i = 0;
	if (min >= max)
	{
		return_val = NULL;
		return (0);
	}
	if (!(return_val = malloc(sizeof(int) * (max - min))))
		return (-1);
	while (min < max)
	{
		return_val[i] = min;
		i++;
		min++;
	}
	*range = return_val;
	return (i);
}


int	main(void)
{
	int		*range;
	int		i;

	i = 0;
	printf("return : %d\n", ft_ultimate_range(&range, -5, 50));
	while (i < 55)
	{
	printf("%d\n", range[i]);
		i++;
	}
	return (0);
}
