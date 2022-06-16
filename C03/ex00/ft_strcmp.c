/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: qbeukelm <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/14 09:46:19 by qbeukelm      #+#    #+#                 */
/*   Updated: 2022/06/15 09:56:27 by qbeukelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2);
void	compare_strings(char *s1, char *s2, int count, int *check);
void	s_one_longer(char *s1, char *s2, int *check);
void	s_two_longer(char *s1, char *s2, int *check);

int	ft_strcmp(char *s1, char *s2)
{
	int	count_a;
	int	count_b;
	int	count;
	int	check;

	count_a = 0;
	count_b = 0;
	count = 0;
	check = 0;
	while (s1[count_a] != '0')
	{
		count_a++;
	}
	while (s2[count_b] != '0')
	{
		count_b++;
	}
	count = count_a - count_b;
	compare_strings(s1, s2, count, &check);
	return (check);
}

void	compare_strings(char *s1, char *s2, int count, int *check)
{
	*check = 0;
	if (count >= 0)
	{
		s_one_longer(s1, s2, check);
	}
	else if (count < 0)
	{
		s_two_longer(s1, s2, check);
	}
}

void	s_one_longer(char *s1, char *s2, int *check)
{
	int	i;

	i = 0;
	while (s1[i] != '0')
	{
		if (s1[i] != s2[i])
		{
			*check = s1[i] - s2[i];
			break ;
		}
		i++;
	}
}

void	s_two_longer(char *s1, char *s2, int *check)
{
	int	i;

	i = 0;
	while (s2[i] != '0')
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
	char	str_a[] = "Dont panic";
	char	str_b[] = "Dont panicsdbskbdksbds;b";
	int		result;

	result = strcmp(str_a, str_b);
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
// return
// < 0 if the 1st non-matching char has a lower
// ascii value in s1 than s2. Return the differance 
// between the ascii value of the first nonmatching character
//
// 0 if the strings are equal
//
// > 0 if the 1st non-matching char has a highter
// ascii value in s1 than s2. Return the differance 
// between the ascii value of the first nonmatching character
//
// if strings are of unequal lenghts still return
// an non-matching character
