/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: qbeukelm <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/15 09:32:17 by qbeukelm      #+#    #+#                 */
/*   Updated: 2022/06/15 12:19:41 by qbeukelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

// strlcat
// appends string src to the end of dest.
// it will append at most destsize - strlen(dest) - 1
// will null terminate, unless seat size is 0
// 
// return 
// total length of the string they tried to create
// this means the total length of dest + src + null terminitor
// 

unsigned	int	ft_strlcat(char *dest, char *src, unsigned int size);
int			count_src_func(char *src, int count_src);
void		count_dest_func(char *dest, int *count_dest_i, int *count_dest_o);
void		copy_string(char *dest, char *src, int count_dest_i, int size);

unsigned	int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int		count_dest_o;
	int		count_dest_i;
	int		count_src;

	count_dest_o = 0;
	count_dest_i = 0;
	count_src = 0;
	count_dest_func(dest, &count_dest_i, &count_dest_o);
	count_src = count_src_func(src, count_src);
	if (size < (unsigned)count_src)
	{
		return (count_src + size);
	}
	else
	{
		copy_string(dest, src, count_dest_i, size);
	}
	return (count_dest_o + count_src);
}

void	copy_string(char *dest, char *src, int count_dest_i, int size)
{
	int	i;

	i = 0;
	while (src[i] != '\0' && ((unsigned)i + count_dest_i) < size)
	{
		dest[count_dest_i] = src[i];
		count_dest_i++;
		i++;
	}
	dest[count_dest_i] = '\0';
}

int	count_src_func(char *src, int count_src)
{
	while (src[count_src] != '\0')
	{
		count_src++;
	}
	return (count_src);
}

void	count_dest_func(char *dest, int *count_dest_i, int *count_dest_o)
{
	int	i;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	*count_dest_o = i;
	*count_dest_i = i;
}

/* 
int	main(void)
{
	char	s1[100] = "My name is ";
	char	s2[100] = "Quentin.";
	int		size;
	int		i;

	size = 14;
	i = ft_strlcat(s1, s2, size);
	printf("i: %d\n", i);
	printf("%s\n", s1);
	return (0);
}
 */