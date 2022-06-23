/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rectangleLong.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbeukelm <qbeukelm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 10:49:47 by qbeukelm      #+  #+#    #+#             */
/*   Updated: 2022/06/04 16:50:47 by qbeukelm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>


void	ft_putchar(char c) 
{
    write(1, &c, 1);
}


void	rush(int x, int y) 
{
    int     xi;
    int     xii;
    int     yi;

    xi = 2;
    xii = 2;
    yi = 2;

    if(y == 1 && x ==1)
    {
        ft_putchar('o');
    }

    // write one horizontal line
    else if(y == 1 && x > 1)
    {
        ft_putchar('o');
        while (xi < x)
        {
        ft_putchar('-');
        xi++;
        }    
        xi = 2;
        ft_putchar('o');
    }
    
    // write one virtile line
    else if(x == 1 && y > 1)
    {
					ft_putchar('o');
        ft_putchar('\n');
        while (yi < y)
        {
        ft_putchar('|');
        ft_putchar('\n');
        yi++;
        }
        ft_putchar('o');
    } 

    // Present a square
    else {
        // Top line
        ft_putchar('o');
        while (xi < x)
        {
            ft_putchar('-');
            xi++;
        } 
        xi = 2;
        ft_putchar('o');
        ft_putchar('\n');

        // Middle section
        while (yi < y)
        {
            ft_putchar('|');
            while (xii < x)
            {
            ft_putchar(' ');
            xii++;
        }
        ft_putchar('|');
        ft_putchar('\n');
        xii = 2;
        yi++;
        }

        // Botom line
        ft_putchar('o');
        while (xi < x)
        {
            ft_putchar('-');
            xi++;
        } 
        xi = 2;
        ft_putchar('o');
        ft_putchar('\n');
    }
}


int main() 
{
    rush(3, 6);
    return 0;
}