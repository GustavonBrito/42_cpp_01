/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 21:30:55 by gustavo-lin       #+#    #+#             */
/*   Updated: 2026/03/10 21:53:14 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie::Zombie(void){};

Zombie::Zombie(std::string name) : _name(name) {};

Zombie::~Zombie(void) {std::cout << "Zombie deallocated\n";};

void Zombie::announce( void )
{
    std::cout << this->_name << ":" << "BraiiiiiiinnnzzzZ...\n";
}

void Zombie::set_name(std::string name)
{
    this->_name = name;
}

