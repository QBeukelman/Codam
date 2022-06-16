/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcapitalize.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: qbeukelm <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/12 21:04:17 by qbeukelm      #+#    #+#                 */
/*   Updated: 2022/06/14 10:51:29 by qbeukelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// 1. 
// First letter
// Is the first letter in the (small) alphabet?

// 2.1
// Loop through the string != termination character
// Is the letter a (large) letter?
// Make it small 

// 2.2
// Is there a space or special character? 
// add one to i
// change this letter to a capital

char	*ft_strcapitalize(char *str);
void	calculation(char *str, int i);

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	calculation(str, i);
	return (str);
}

void	calculation(char *str, int i)
{
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if ((str[i - 1] >= 0 && str[i - 1] <= 47)
				|| (str[i - 1] >= 58 && str[i - 1] < 64)
				|| (str[i - 1] > 123))
			{
				str[i] = str[i] -32;
			}
		}
		i++;
	}
}

/* 
int	main(void)
{
	char	str[] = {"salut, comment ? 42mots qe-deux; cinquante+et+un"};
	char	*result;

	printf("---\n\nThe orignal string: \n%s\n\n", str);
	result = ft_strcapitalize(str);
	printf("The new string: \n%s\n\n---", result);
}


// orignal 
// salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un
//
// output 
// Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un
 */