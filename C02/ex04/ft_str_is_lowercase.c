/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_lowercase.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: qbeukelm <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/12 20:53:37 by qbeukelm      #+#    #+#                 */
/*   Updated: 2022/06/14 10:51:05 by qbeukelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	check;

	i = 0;
	check = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
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
int main(void)
{
	char *str[] = {"dontpanic"};
	int	i = 0;

	i = ft_str_is_lowercase(*str);
	printf("---\n\nThe result is: %d\n", i);
	if (i == 1)
	{
		printf("Yay, this string contains only lower case characters.\n\n---");
	}
	if (i == 0)
	{
		printf("A character in the string that is not a lower chase.\n\n---");
	}
}
 */