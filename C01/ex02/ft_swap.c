/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_swap.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: qbeukelm <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/08 13:28:54 by qbeukelm      #+#    #+#                 */
/*   Updated: 2022/06/08 13:32:07 by qbeukelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp_a;

	temp_a = *a;
	*a = *b;
	*b = temp_a;
}
