/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: qbeukelm <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/27 08:48:16 by qbeukelm      #+#    #+#                 */
/*   Updated: 2022/06/27 09:18:46 by quentinbeuk   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// The strdup() function allocates sufficent memory for a copy of the string
// s1, does the copy and returns a pointer to it.

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int		ft_strlen(char *str);
char	*ft_strdup(char *src);

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

char *ft_strdup(char *src)
{
	char	*new;
	int		i;

	i = 0;
	if (!(new = (char*)malloc(sizeof(char) * ft_strlen(src) + 1)))
		return (NULL);
	while (src[i] != '\0')
	{
		new[i] = src[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

int	main(int argc, char **argv)
{
	char	*mine;
	char	*orignal;

	if (argc == 2)
	{
		mine = ft_strdup(argv[1]);
		orignal = strdup(argv[1]);
		printf("My version of strdup :%s:\n", mine);
		printf("      Orignal strdup :%s:\n", orignal);
	}
	return (0);
}