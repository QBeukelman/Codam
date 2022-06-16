/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: qbeukelm <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/15 12:23:16 by qbeukelm      #+#    #+#                 */
/*   Updated: 2022/06/15 12:25:23 by qbeukelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

// 1. 
// get the length of dest

// 2. 
// place src at dest, starting at length
// place n number of characters after the orignal src

// 3. 
// place termination character

char	*ft_strncat(char *dest, char *src, unsigned int nb);

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	count_dest;

	i = 0;
	count_dest = 0;
	while (dest[count_dest] != '\0')
	{
		count_dest++;
	}
	while (src[i] != '\0' && (unsigned)i < nb)
	{
		dest[count_dest] = src[i];
		count_dest++;
		i++;
	}
	dest[count_dest] = '\0';
	return (dest);
}
/* 
int main(void)
{
	char s1[100] = "Dont ";
	char s2[100] = "Panic";
	char *result;

	result = ft_strncat(s1, s2, 0);
	printf("The ft_strncpy returns: %s", result);
	// printf("The orignal function: %s", strncat(s1, s2, 3));
}
 */