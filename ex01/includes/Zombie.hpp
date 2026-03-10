/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 08:26:16 by gustavo-lin       #+#    #+#             */
/*   Updated: 2026/03/10 08:32:00 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie{

public:
    
    Zombie();
    Zombie( std::string name );
    ~Zombie(void);
    void announce( void );
    void setName(std::string name);

private:
    std::string _name;
};

Zombie* zombieHorde( int N, std::string name );

#endif