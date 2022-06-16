/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_uppercase.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: qbeukelm <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/12 20:56:02 by qbeukelm      #+#    #+#                 */
/*   Updated: 2022/06/14 10:51:11 by qbeukelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	check;

	i = 0;
	check = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			check = 1;
		}
		else
		{
			check = 0;
			break ;
		}
		i++;
	}
	return (check);
}

/* 
int	main(void)
{
	char *str[] = {"DONTPANIC"};
	int i;

	i = ft_str_is_uppercase(*str);
	printf("---\n\nThe result is: %d\n", i);
	if (i == 1)
	{
		printf("Hoera! This string contains only uppercase letters\n\n---");
	}
	if (i == 0)
	{
		printf("Oops! There is not an uppercase alphabet.\n\n---");
	}
}
*/