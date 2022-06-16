/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_alpha.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: qbeukelm <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/10 20:40:52 by qbeukelm      #+#    #+#                 */
/*   Updated: 2022/06/13 16:26:40 by qbeukelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_alpha(char *str);

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	check;

	i = 0;
	check = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z'))
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
int	main()
{
	int i = 0;
	char *str[] = {"Don't panic!"};
	i = ft_str_is_alpha(*str);

	printf("---\n\nThe result is: %d\n", i);
	if (i == 1)
	{
		printf("There are only alphabetical characters in this string!\n\n---");
	}
	else
	{
		printf("Oops! There is a special characters in this string.\n\n---");
	}
	return (0);
}
 */