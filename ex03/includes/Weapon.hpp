/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 19:54:01 by gustavo-lin       #+#    #+#             */
/*   Updated: 2026/03/08 21:03:34 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
 
class Weapon
{
public:
    Weapon(std::string type);
    ~Weapon(void);    
    const std::string& getType(void) const;
    void               setType(std::string weapon);

private:
    std::string _type;

};
 
#endif