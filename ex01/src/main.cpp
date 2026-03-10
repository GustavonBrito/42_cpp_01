/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 13:29:32 by gustavo-lin       #+#    #+#             */
/*   Updated: 2026/03/07 19:04:27 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

int main(void)
{
    int N = 10;
         
    Zombie *funkyZombie = zombieHorde(N, "FunkyZombie");
   
    delete []funkyZombie;
    return 0;
}