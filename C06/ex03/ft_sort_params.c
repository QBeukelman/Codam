/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sort_params.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: qbeukelm <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/22 15:06:20 by qbeukelm      #+#    #+#                 */
/*   Updated: 2022/06/22 21:49:07 by qbeukelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	sort(char *str);
void	ft_putstr(char *str);
void	ft_putchar(char c);
int		count_characters(char *str);

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	count_characters(char *str)
{
	int	count;

	count = 0;
	while (str[count])
	{
		count++;
	}
	return (count);
}

void	sort(char *str)
{
	int		count;
	int		i;
	int		j;
	char	c;

	i = 0;
	j = 1;
	count = count_characters(str);
	while (i < count)
	{
		while (j < count)
		{
			if (str[i] > str[j])
			{
				c = str[i];
				str[i] = str[j];
				str[j] = c;
			}
			j++;
		}
		i++;
	}
	ft_putstr(str);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		sort(argv[i]);
		i++;
	}
}
