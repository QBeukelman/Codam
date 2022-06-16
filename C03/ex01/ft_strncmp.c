/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: qbeukelm <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/15 09:56:51 by qbeukelm      #+#    #+#                 */
/*   Updated: 2022/06/15 12:30:58 by qbeukelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n);
int		compare_strings(char *s1, char *s2, int count, unsigned int n);
void	s_one_longer(char *s1, char *s2, int *check, unsigned int n);
void	s_two_longer(char *s1, char *s2, int *check, unsigned int n);

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	count;
	int	count_a;
	int	count_b;
	int	check;

	count = 0;
	count_a = 0;
	count_b = 0;
	check = 0;
	while (s1[count_a] != '\0')
	{
		count_a++;
	}
	while (s2[count_b] != '\0')
	{
		count_b++;
	}
	count = count_a - count_b;
	check = compare_strings(s1, s2, count, n);
	return (check);
}

int	compare_strings(char *s1, char *s2, int count, unsigned int n)
{
	int	check;

	check = 0;
	if (count >= 0)
	{
		s_one_longer(s1, s2, &check, n);
	}
	else if (count < 0)
	{
		s_two_longer(s1, s2, &check, n);
	}
	return (check);
}

void	s_one_longer(char *s1, char *s2, int *check, unsigned int n)
{
	int	i;

	i = 0;
	while (s1[i] != '0' && (unsigned)i < n)
	{
		if (s1[i] != s2[i])
		{
			*check = s1[i] - s2[i];
			break ;
		}
		i++;
	}
}

void	s_two_longer(char *s1, char *s2, int *check, unsigned int n)
{
	int	i;

	i = 0;
	while (s2[i] != '\0' && (unsigned)i < n)
	{
		if (s2[i] != s1[i])
		{
			*check = s1[i] - s2[i];
			break ;
		}
		i++;
	}
}
/* 
int	main(void)
{
	char	str_a[] = {"Hello there"};
	char	str_b[] = {"Hello there are you doing today?"};
	int		size;
	int		result;

	size = 20;
	result = strncmp(str_a, str_b, size);
	if (result == 0)
	{
		printf("\n\nThe strings are equal\n");
		printf("The value returned was: %d\n\n", result);
	}
	else if (result < 0)
	{
		printf("\n\nstr_a < str_b\n");
		printf("The value returned was: %d\n\n", result);
	}
	else if (result > 0)
	{
		printf("\n\nstr_a > str_b\n");
		printf("The value returned was: %d\n\n", result);
	}
	return (0);
}
 */