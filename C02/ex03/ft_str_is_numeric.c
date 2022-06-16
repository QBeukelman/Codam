/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_numeric.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: qbeukelm <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/12 20:43:52 by qbeukelm      #+#    #+#                 */
/*   Updated: 2022/06/14 10:50:59 by qbeukelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	check;

	i = 0;
	check = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			check = 1;
		}
		else
		{
			check = 0;
			if (check == 0)
			{
				break ;
			}
		}
		i++;
	}
	return (check);
}

/* 
int main()
{
	int i = 0;
	char *str[] = {"12345"};
	i = ft_str_is_numeric(*str);

	printf("---\n\nThe result is: %d\n", i);
	if (i == 1)
	{
		printf("There are only numeric characters in this string!\n\n---");
	}
	else
	{
		printf("Oops! There is a non-numric characters in this string.\n\n---");
	}
	return (0);
}
*/