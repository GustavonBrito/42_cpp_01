/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 18:05:02 by gustavo-lin       #+#    #+#             */
/*   Updated: 2026/03/07 19:19:13 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"
#include <iostream>

Zombie *zombieHorde( int N, std::string name )
{
    Zombie *brandNewZombie = new Zombie[N];
    
    for (int i = 0; i < N; i++)
    {
        brandNewZombie[i].setName(name);
        brandNewZombie[i].announce();
    }

    return brandNewZombie;
}