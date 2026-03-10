/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 19:54:03 by gustavo-lin       #+#    #+#             */
/*   Updated: 2026/03/08 21:20:01 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanA.hpp"

HumanA::~HumanA(void) { std::cout << this->_name << " deallocated\n"; };

HumanA::HumanA(std::string name, Weapon &weapon) : _weapon(weapon) { this->_name = name;}

void        HumanA::attack()
{
    std::cout << this->_name << " attacks with their " << this->_weapon.getType() << "\n";
};