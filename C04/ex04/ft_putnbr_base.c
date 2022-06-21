/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_base.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: qbeukelm <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/16 14:47:40 by qbeukelm      #+#    #+#                 */
/*   Updated: 2022/06/20 13:53:36 by qbeukelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// 1.
// Create a function that can display a number in a base system

// 2.
// number is given in an int
// radix in the shape of a string of characters

// Common base decimal number
// 0123456789 

// Binary base system
// 01

// Hexadecimal base system
// 0123456789ABCDEF

// Octal base system 
// poneyvif

#include <stdio.h>
#include <unistd.h>

void	ft_putnbr_base(int nbr, char *base);
int		check_base(char *base, int count);
void	base_conversion(int nbr, int count, char *base);
int		count_characters(char *base);
void	ft_putchar(char c);

void	ft_putnbr_base(int nbr, char *base)
{
	int	count;
	int	check;

	check = 1;
	count = count_characters(base);
	check = check_base(base, count);
	if (check == 1)
		base_conversion(nbr, count, base);
}

int	check_base(char *base, int count)
{
	int	i;
	int	j;
	int	check;

	i = 0;
	j = 0;
	check = 1;
	if (count < 2)
		check = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			check = 0;
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				check = 0;
			j++;
		}
		i++;
	}
	return (check);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	count_characters(char *base)
{
	int	count;

	count = 0;
	while (base[count] != '\0')
		count++;
	return (count);
}

void	base_conversion(int nbr, int count, char *base)
{
	if (nbr < count)
		ft_putchar(base[nbr]);
	if (nbr < 0)
		nbr = nbr * -1;
	if (nbr >= count)
	{
		base_conversion(nbr / count, count, base);
		base_conversion(nbr % count, count, base);
	}
}

/* 
int	main(void)
{
	char *decimal = "0123456789";
	char *binary = "01";
	char *hexidecimal = "0123456789ABCDEF";
	char *octal = "poneyvif";
	char *test = "aba";

	ft_putnbr_base(-2256, hexidecimal);
}
 */