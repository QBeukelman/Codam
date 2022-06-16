/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: qbeukelm <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/12 21:07:51 by qbeukelm      #+#    #+#                 */
/*   Updated: 2022/06/14 12:20:32 by qbeukelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

// With the strlcpy() function, however, only dstsize characters 
// maximum are copied, and the value returned is the size of string src.
//
//

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int				i;
	unsigned int	src_count;

	src_count = 0;
	while (src[src_count] != '\0')
	{
		src_count++;
	}
	i = 0;
	while ((unsigned)i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_count);
}

/*  
int main(void)
{
 	char src[] = {"Dont-panic"};
	char dest[] = {"Copy over this text"};
	int size = 5;
	char result;

	result = strlcpy(dest, src, size);
	printf("---\n\nCopied: %s\nInto: %s\nLength %d\n\n---", src, dest, result);

	
	// Test orignal strlcpy
	// char src[] = {"Dont panic"};
	// char dest[] = {"Copy over this text"};
	// int lenght = 5;

	// strlcpy(dest, src, lenght);
	// printf("---\n\nCopied: %s\nInto: %s\nLength %d\n\n---", src, dest, lenght);  
	
}  */