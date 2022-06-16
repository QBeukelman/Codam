/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: qbeukelm <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/14 22:32:08 by qbeukelm      #+#    #+#                 */
/*   Updated: 2022/06/15 12:22:12 by qbeukelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// Desinition 
// The function takes two srrings s1 and s2
// it finds the first occuracne of of s2 in s1
// 
// Return
// A pointer to the first character of the found s2 in s2
// otherwise a null pointer if s2 is not present in s1

// 1. 
// find length of to_find

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);
void	count_characters(char *to_find, int *count_to_find);
int		search_match(char *str, char *to_find, int *match, int count_to_find);
void	create_result(char *str, int match);

char	*ft_strstr(char *str, char *to_find)
{
	int	count_to_find;
	int	s_count;
	int	match;

	count_to_find = 0;
	match = 0;
	s_count = 0;
	count_characters(to_find, &count_to_find);
	s_count = search_match(str, to_find, &match, count_to_find);
	if (s_count < count_to_find)
	{
		return (NULL);
	}
	else if (s_count == count_to_find)
	{
		create_result(str, match);
	}
	return (str);
}

void	create_result(char *str, int match)
{
	int	i;

	i = 0;
	while (str[match] != '\0')
	{
			str[i] = str[match];
			match++;
			i++;
	}
	str[i] = '\0';
}

void	count_characters(char *to_find, int *count_to_find)
{
	int	i;

	i = 0;
	while (to_find[i] != '\0')
	{
		i++;
	}
	*count_to_find = i;
}

int	search_match(char *str, char *to_find, int *match, int count_to_find)
{
	int	i[4];

	while (str[i[0]] != '\0')
	{
		if (str[i[0]] == to_find[i[1]])
		{
			i[2]++;
			if (i[2] == count_to_find)
			{
				*match = (i[0] - count_to_find + 1);
				i[3] = i[2];
				break ;
			}
			i[1]++;
		}
		else
		{
			i[2] = 0;
			i[3] = 0;
		}
		i[0]++;
	}
	return (i[3]);
}
/* 
int	main(void)
{
	char	s1[] = "Hello all, my name is Quentin.";
	char	s2[] = "all";
	char	*result;

	result = strstr(s1, s2);
	if (result)
	{
		printf("\n\nThe result is: %s\n\n", result);
	}
	else if (result == NULL)
	{
		printf("String not found\n");
	}
} */
