/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rectangleHash.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbeukelm <qbeukelm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 10:49:47 by qbeukelm      #+  #+#    #+#             */
/*   Updated: 2022/06/05 17:28:45 by qbeukelm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>


void ft_putchar(char height) 
{

    write(1, &height, 1);

}


void rush(void) 
{
    int     x;
    int     y;

    int     a;
    int     b;
    int     c;

    x = 23;
    a = 0;

    y = 10;
    b = 0;
    c = 0;


    while(b < y)
    {
        while(c < x)
        {
            ft_putchar('#');
            c++;
        }
        
        b++;
        ft_putchar('\n');
        c = 0;
    } 

    while(a < x)
    {
        ft_putchar('#');
        a++;
    }
}


int main() 
{

    rush();
    return 0;
}