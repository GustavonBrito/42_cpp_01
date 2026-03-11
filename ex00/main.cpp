/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 21:30:58 by gustavo-lin       #+#    #+#             */
/*   Updated: 2026/03/10 21:54:13 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Zombie.hpp"

int main(void)
{
    Zombie *zombie = newZombie("Gustavo");
    
    randomChump("Brito");
    
    delete zombie;
    
    return 0;
}
