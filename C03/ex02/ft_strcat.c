/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcat.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: qbeukelm <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/15 10:16:45 by qbeukelm      #+#    #+#                 */
/*   Updated: 2022/06/15 12:26:22 by qbeukelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

// 1. 
// get the length of dest

// 2. 
// place src at dest, starting at length

// 3. 
// place termination character at end

char	*ft_strcat(char *dest, char *src);

char	*ft_strcat(char *dest, char *src)
{
	int	count_dest;
	int	i;

	count_dest = 0;
	i = 0;
	while (dest[count_dest] != '\0')
	{
		count_dest++;
	}
	while (src[i] != '\0')
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

	result = strcat(s1, s2);
	printf("  The result of ft_strcat: %s\n", result);
	//printf("The result of the orignal: %s", strcat(s1, s2));
}
 */