/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_rev_int_tab.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: qbeukelm <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/08 13:31:31 by qbeukelm      #+#    #+#                 */
/*   Updated: 2022/06/14 16:43:24 by qbeukelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	hold_value;

	i = 0;
	hold_value = 0;
	while (i < (size / 2))
	{
		hold_value = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = hold_value;
		i++;
	}
}


int	main(void)
{
	int	tab[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int	size;
	int	i;

	size = 9;
	ft_rev_int_tab(tab, size);
	i = 0;
	while (i < size)
	{
		printf("tab[%d] = %d\n", i, tab[i]);
		i++;
	}
}

