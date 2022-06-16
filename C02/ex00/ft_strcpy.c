/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: qbeukelm <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/10 20:37:31 by qbeukelm      #+#    #+#                 */
/*   Updated: 2022/06/16 20:34:29 by qbeukelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	if (dest == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/* 
int	main(void)
{
	// include termination character in count
	char src[13] = "Don't panic!";
	char dest[] = "";
	char *dest_ptr = strcpy(dest, src);

	// real string copy function 
	//strcpy(dest, src);

	// new string copy function
	ft_strcpy(dest, src);
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
