/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: qbeukelm <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/16 20:22:48 by qbeukelm      #+#    #+#                 */
/*   Updated: 2022/06/16 20:24:49 by qbeukelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str);

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

/* 
int	main(void)
{
	char 	str[] = "Hello all, my name is Quentin";
	int		i;

	i = ft_strlen(str);
	printf("The value of i is: %d", i);
}
*/
