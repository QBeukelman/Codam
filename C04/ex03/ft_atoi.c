/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: qbeukelm <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/16 09:07:10 by qbeukelm      #+#    #+#                 */
/*   Updated: 2022/06/20 13:54:02 by qbeukelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// 1. 
// Count how many minus signs appear before the number

// 2. 
// Locate the numbers and place them in a seperate array *numbers 

// 3. 
// Convert the character array *numbers to an integer

// 4. 
// Depending on the amout of minus signes, return either a
// positive or negative integer

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int		ft_atoi(char *str);
int		count_minus_func(char *str, int count_minus);
int		check_string_func(char *str, char *numbers);
int		convert_atoi_func(char *numbers, int *result);
int		fetch_numbers(char *str, char *numbers, int *i);

int	ft_atoi(char *str)
{
	int		number_count;
	int		count_minus;
	int		remainder;
	char	numbers[11];
	int		result;

	count_minus = 0;
	remainder = 0;
	result = 0;
	count_minus = count_minus_func(str, count_minus);
	number_count = check_string_func(str, numbers);
	result = convert_atoi_func(numbers, &result);
	remainder = count_minus % 2;
	if (number_count > 0)
	{
		if (remainder == 0)
			return (result);
		else
		{
			result = result * -1;
			return (result);
		}
	}
	else
		return (0);
}

int	count_minus_func(char *str, int count_minus)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '-')
			count_minus++;
		i++;
	}
	return (count_minus);
}

int	check_string_func(char *str, char *numbers)
{
	int	i[2];

	i[0] = 0;
	i[1] = 0;
	i[1] = fetch_numbers(str, numbers, i);
	return (i[1]);
}

int	fetch_numbers(char *str, char *numbers, int *i)
{
	while (str[i[0]] != '\0')
	{
		if ((str[i[0]] != ' ') && (str[i[0]] != '-') && (str[i[0]] != '+')
			&& (!(str[i[0]] >= '0' && str[i[0]] <= '9'))
			&& (!(str[i[0]] >= 9 && str[i[0]] <= 13)))
			break ;
		if (str[i[0]] >= '0' && str[i[0]] <= '9')
		{
			if (i[1] == 0)
			{
				if (!(str[i[0] - 1] == '+' || str[i[0] - 1] == '-'))
					break ;
			}
			numbers[i[1]] = str[i[0]];
			i[1]++;
			if (!(str[i[0] + 1] >= '0' && str[i[0] + 1] <= '9'))
			{
				numbers[i[1]] = '\0';
				i[0]++;
				break ;
			}
		}
		i[0]++;
	}
	return (i[1]);
}

int	convert_atoi_func(char *numbers, int *result)
{
	int	i;

	i = 0;
	while (numbers[i] != '\0')
	{
		*result = (*result * 10) + numbers[i] - '0';
		i++;
	}
	return (*result);
}
/* 
int	main(int argc, char **argv)
{
	char	*str;
	int		i;

	str = argv[1];
	if (argc == 2)
	{
		printf("The argument passed to main is: %s\n\n", argv[1]);
		i = ft_atoi(str);
		printf("The result is: %d\n\n", i);
	}
	else if (argc > 2)
	{
		printf("Too many arguments");
	}
	else
	{
		printf("One argyment expected");
	}
}
 */