/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_printable.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: qbeukelm <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/12 20:58:35 by qbeukelm      #+#    #+#                 */
/*   Updated: 2022/06/14 10:51:15 by qbeukelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str);

int	ft_str_is_printable(char *str)
{
	int	i;
	int	check;

	i = 0;
	check = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
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
	char *str[] = {"\x03\x55"};
	int i;

	i = 0;
	i = ft_str_is_printable(*str);

	printf("---\n\nThe result is: %d\n", i);
	if (i == 1)
	{
		printf("Cool! this string contains only printable characters\n\n---");
	}
	if (i == 0)
	{
		printf("Oeff, this string contains characters that are not printable.\n\n---");
	}
}
 */

//    0        32       126
//
//   nul       sp        ~
//
//  "\x00"   "\x32"   "\x126"
