/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 19:53:59 by gustavo-lin       #+#    #+#             */
/*   Updated: 2026/03/08 21:07:50 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"
 
class HumanB
{
public:
    HumanB(std::string name);
    ~HumanB(void);
    void        setWeapon(Weapon &weapon);
    void        attack();

private:
    std::string _name;
    Weapon      *_weapon;
};
 
#endif