/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: qbeukelm <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/10 20:38:05 by qbeukelm      #+#    #+#                 */
/*   Updated: 2022/06/14 10:50:52 by qbeukelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		++i;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/* 
int	main(void)
{
	// include termination character in count
	char src[13] = "Don't panic!";
	char dest[100];
	char *dest_ptr = strncpy(dest, src, 13);

	// real string copy function 
	//strncpy(dest, src, 13);

	// new string copy function
	ft_strncpy(dest, src, 4);

	printf("     src: %s\n", src);
	printf("    dest: %s\n", dest);
	printf("dest_ptr: %s\n", dest_ptr);

	printf("    dest: %p\n", dest);
	printf("dest_ptr: %p\n", dest_ptr);

	return (0);
}
 */
//      source: D o n ' t _ p a n i  c  ! \0
//              1 2 3 4 5 6 7 8 9 10 11 12 13
//
// destination: 
//              1 2 3 4 5 6 7 8 9 10 11 12 13
//
