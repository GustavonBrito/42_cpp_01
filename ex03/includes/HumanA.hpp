/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 19:53:57 by gustavo-lin       #+#    #+#             */
/*   Updated: 2026/03/09 12:11:02 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"
 
class HumanA
{
public:
    HumanA(std::string name, Weapon &weapon);
    ~HumanA(void);    
    void        attack();

private:
    std::string _name;
    Weapon      &_weapon;
};

#endif