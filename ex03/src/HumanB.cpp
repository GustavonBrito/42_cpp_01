/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 19:54:05 by gustavo-lin       #+#    #+#             */
/*   Updated: 2026/03/19 04:29:54 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanB.hpp"

HumanB::~HumanB(void) { std::cout << this->_name << " deallocated\n"; };

HumanB::HumanB(std::string name){this->_name = name;}

void        HumanB::setWeapon(Weapon &weapon){this->_weapon = &weapon;};

void        HumanB::attack()
{
    if (!this->_weapon)
    {
        std::cout << "Human B does not have a weapon";    
        return;
    }
    std::cout << this->_name << " attacks with their " << this->_weapon->getType() << "\n";
};