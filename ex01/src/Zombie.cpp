/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 08:26:13 by gustavo-lin       #+#    #+#             */
/*   Updated: 2026/03/07 20:55:40 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"
#include <iostream>

Zombie::Zombie(void){};
Zombie::Zombie(std::string name) { this->_name = name; }
Zombie::~Zombie( void ) { std::cout << this->_name << " deallocated\n"; };

void Zombie::announce( void )
{
    std::cout << this->_name << ":" << "BraiiiiiiinnnzzzZ...\n";
}

void Zombie::setName(std::string name)
{
    this->_name = name;
}