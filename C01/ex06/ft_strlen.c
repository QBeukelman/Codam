/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: qbeukelm <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/08 13:31:04 by qbeukelm      #+#    #+#                 */
/*   Updated: 2022/06/08 16:45:41 by qbeukelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str);

int	ft_strlen(char *str)
{
	size_t	index;

	index = 0;
	while (str[index] != '\0')
	{
		index++;
	}
	return (index);
}

/* 
int	main(void)
{
	char	str[] = "Hello world!";
	int		result;

	result = ft_strlen(str);
	printf("%d\n", result);
	return (0);
}
 */